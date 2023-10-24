#pragma once
#include "CodeSnippet.h"

class SnippetController {
public:
    void addSnippet(const CodeSnippet& snippet);
    std::vector<CodeSnippet> getAllSnippets() const;
private:
    std::vector<CodeSnippet> snippets;
};
