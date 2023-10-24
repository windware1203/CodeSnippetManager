#include "CodeSnippet.h"

CodeSnippet::CodeSnippet(const std::string& title, const std::string& language, const std::vector<std::string>& tags, const std::string& code)
    : title(title), language(language), tags(tags), code(code) {}

std::string CodeSnippet::getTitle() const {
    return title;
}

std::string CodeSnippet::getLanguage() const {
    return language;
}

std::vector<std::string> CodeSnippet::getTags() const {
    return tags;
}

std::string CodeSnippet::getCode() const {
    return code;
}
