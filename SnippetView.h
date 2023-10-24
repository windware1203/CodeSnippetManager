#pragma once
#include <QWidget>
#include <QListWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include "SnippetController.h"

class SnippetView : public QWidget {
    Q_OBJECT
public:
    SnippetView(SnippetController& controller);
    void refreshSnippetList();
private:
    SnippetController& controller;
    QListWidget* snippetList;
    QLineEdit* titleInput;
    QLineEdit* languageInput;
    QLineEdit* tagsInput;
    QTextEdit* codeInput;
    QPushButton* addButton;
};
