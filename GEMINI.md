# LLM Engineering Course Context

## Project Overview
This repository contains the coursework and resources for the "LLM Engineering - Master AI and LLMs" course. It is an 8-week program designed to take students from basics to building autonomous Agentic AI solutions.

## Architecture & Structure
The project is organized into weekly modules, each focusing on specific concepts:
- **Week 1-8 Directories:** Contain the core curriculum, including Jupyter Notebooks (`.ipynb`) and Python scripts (`.py`).
- **`guides/`:** Supplemental guides on Git, Python, debugging, and AI APIs.
- **`setup/`:** Platform-specific setup instructions and diagnostics.
- **`community-contributions/`:** Projects and notebooks submitted by the student community.
- **`assets/`:** Images and static resources.

## Tech Stack
- **Language:** Python 3.11+
- **Package Manager:** `uv` (Astral)
- **Interactive Computing:** Jupyter Notebooks
- **Key Libraries:**
  - **LLMs:** `openai`, `anthropic`, `google-generativeai`, `ollama`
  - **Frameworks:** `langchain`, `langchain-core`, `langchain-community`
  - **Vector DB:** `chromadb`
  - **UI:** `gradio`
  - **Data/Utils:** `pandas`, `numpy`, `python-dotenv`

## Setup & Configuration
1.  **Package Management:** The project uses `uv` for fast dependency management.
    -   Install dependencies: `uv sync`
    -   Update `uv`: `uv self update`
2.  **Environment Variables:**
    -   Secrets (API keys) are stored in a `.env` file in the project root.
    -   **Critical:** This file must be named exactly `.env` and should never be committed to version control.
    -   Format: `OPENAI_API_KEY=sk-...`

## Running the Code
### Jupyter Notebooks
-   Most coursework is in `.ipynb` files.
-   **Recommended:** Open in VS Code or Cursor.
-   **Kernel:** Select the Python environment created by `uv` (usually `.venv`).

### Python Scripts
To run Python scripts using the project's environment, use `uv run`:
```bash
uv run python path/to/script.py
```
Example (Week 5 App):
```bash
uv run python week5/app.py
```

### CLI Commands
-   **Ollama:** Ensure Ollama is running (`ollama serve`) and required models are pulled (e.g., `ollama run llama3.2`).

## Development Conventions
-   **Learning by Doing:** The course emphasizes executing and modifying code cells in notebooks.
-   **Progression:** Content builds week-over-week. Ensure prerequisites from previous weeks are understood.
-   **Style:** Standard Python/Jupyter best practices.
-   **Troubleshooting:** Refer to `setup/troubleshooting.ipynb` or specific setup guides if issues arise.
