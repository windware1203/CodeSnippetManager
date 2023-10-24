#include "SnippetView.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QApplication>

SnippetView::SnippetView(SnippetController& controller) : controller(controller) {
    QVBoxLayout* layout = new QVBoxLayout(this);

    QLabel* titleLabel = new QLabel("Title:", this);
    titleInput = new QLineEdit(this);

    QLabel* languageLabel = new QLabel("Language:", this);
    languageInput = new QLineEdit(this);

    QLabel* tagsLabel = new QLabel("Tags (comma-separated):", this);
    tagsInput = new QLineEdit(this);

    QLabel* codeLabel = new QLabel("Code:", this);
    codeInput = new QTextEdit(this);

    addButton = new QPushButton("Add Snippet", this);

    snippetList = new QListWidget(this);

    layout->addWidget(titleLabel);
    layout->addWidget(titleInput);
    layout->addWidget(languageLabel);
    layout->addWidget(languageInput);
    layout->addWidget(tagsLabel);
    layout->addWidget(tagsInput);
    layout->addWidget(codeLabel);
    layout->addWidget(codeInput);
    layout->addWidget(addButton);
    layout->addWidget(snippetList);

    connect(addButton, &QPushButton::clicked, this, &SnippetView::addSnippet);

    refreshSnippetList();
}

void SnippetView::refreshSnippetList() {
    snippetList->clear();
    for (const CodeSnippet& snippet : controller.getAllSnippets()) {
        snippetList->addItem(QString::fromStdString(snippet.getTitle()));
    }
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SnippetController controller;
    SnippetView view(controller);
    view.show();
    return app.exec();
}
