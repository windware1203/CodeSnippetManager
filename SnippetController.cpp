#include "SnippetController.h"

void SnippetController::addSnippet(const CodeSnippet& snippet) {
    snippets.push_back(snippet);
}

std::vector<CodeSnippet> SnippetController::getAllSnippets() const {
    return snippets;
}
