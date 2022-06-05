#pragma once

#include <iostream>
#include <fstream>
#include <regex>
#include <filesystem>
#include <algorithm>

namespace CavaSystem {
	using namespace std;
	namespace fs = std::filesystem;

	static void clearOldDebugLogs() {
		try {
			for (const auto& entry : fs::directory_iterator("DebugData"))
				fs::remove_all(entry.path());
		}
		catch (exception& exc) {
			return;
		}
	}

	static string replaceValueInString(string input, char search, char replace) {
		for (int i = 0; i < input.size(); i++)
			if (input[i] == search) input[i] = replace;
		return input;
	}

	static void printValuesToFile(string filename, vector<string> messages) {
		string folder = "DebugData";
		fs::create_directory(folder);

		string modifiedMessage;
		for (int i = 0; i < messages.size(); i++) {
			modifiedMessage += replaceValueInString(messages[i], '.', ',') + "\t";
		}

		fstream file;
		file.open(folder + "\\" + filename, ios::out | ios::app);
		file << modifiedMessage << endl;
		file.close();
	}

	static void printValueToFile(string filename, string message) {
		vector<string> msg{ message };
		printValuesToFile(filename, msg);
	}
}