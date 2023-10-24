#pragma once
#include <string>
#include <vector>

class CodeSnippet {
public:
    CodeSnippet(const std::string& title, const std::string& language, const std::vector<std::string>& tags, const std::string& code);
    std::string getTitle() const;
    std::string getLanguage() const;
    std::vector<std::string> getTags() const;
    std::string getCode() const;
private:
    std::string title;
    std::string language;
    std::vector<std::string> tags;
    std::string code;
};
