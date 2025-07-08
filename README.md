<h1 align="center">📊 Calculadora de Impostos do Brasil 🇧🇷</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C++-GCC13.2-green?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/github/languages/code-size/brzRaven01001/calculadora-impostos-brazil?style=for-the-badge" />
  <img src="https://img.shields.io/github/last-commit/brzRaven01001/calculadora-impostos-brazil?style=for-the-badge" />
</p>

---

## 📌 Sobre o projeto

A **Calculadora de Impostos do Brasil** é uma aplicação em C++ desenvolvida para simular os descontos de **INSS**, **IRRF** e estimar a aposentadoria com base nas regras fornecidas pelo próprio usuário.

> 🏛️ Os cálculos seguem as **tabelas oficiais mais recentes da Receita Federal** (2024), conforme valores publicados nos sites do governo.

---

## ✨ Funcionalidades

- ✅ Cálculo automático de **INSS por faixas progressivas**
- ✅ Cálculo automático do **IRRF** com base na dedução padrão
- ✅ Estimativa da **idade de aposentadoria**, conforme:
  - Idade mínima
  - Tempo de contribuição atual
  - Tempo de contribuição necessário
  - Percentual de contribuição mensal
- ✅ Interface de texto simples e intuitiva
- ✅ Suporte a compilações modernas com `g++ 13.2.0`

---

## 🖼️ Capturas de Tela

> 💻 Exemplo da interface no terminal:

<p align="center">
  <img src="[https://private-user-images.githubusercontent.com/124938721/463480720-c5069da0-304a-43d8-805b-12205c422e2b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTE5NDMzNjEsIm5iZiI6MTc1MTk0MzA2MSwicGF0aCI6Ii8xMjQ5Mzg3MjEvNDYzNDgwNzIwLWM1MDY5ZGEwLTMwNGEtNDNkOC04MDViLTEyMjA1YzQyMmUyYi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUwNzA4JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MDcwOFQwMjUxMDFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT03NGQ5YTYwZmFhZTQwNjM5OGFjNTBkZmJjMGQwNDFkODc2Y2M2ZjI1ZGYxNzk1ODJhM2M5YWZiMTNhZWZiYTFmJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.VLVgenv0mjgGqyhmXl7OJ5rQNxsHgGMdW8L6fUMnHdo)" alt="Demonstração no terminal" width="700">
</p>

> 📊 Estimativa de aposentadoria:

<p align="center">
  <img src="https://private-user-images.githubusercontent.com/124938721/463479301-dc124c4a-7661-44cb-ad1a-8c78d392cc5e.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTE5NDMxMDEsIm5iZiI6MTc1MTk0MjgwMSwicGF0aCI6Ii8xMjQ5Mzg3MjEvNDYzNDc5MzAxLWRjMTI0YzRhLTc2NjEtNDRjYi1hZDFhLThjNzhkMzkyY2M1ZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUwNzA4JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MDcwOFQwMjQ2NDFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0wZjdhZDFjOTZlZmU2YmNjOTIzZDEzYmM2MGNlZjUyZmEzMTU1MTZmZTY3ZWM4YTRhOTE1NmRjZDliYTAzYjg1JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.7psdFx_oyP_TW2rfTsbnkcJ15Hqu_yEQcZPmpvja5q0" alt="Estimativa de aposentadoria" width="700">
</p>

---

## ⚙️ Como compilar

### Requisitos

- Sistema: Windows
- Compilador: [MinGW-w64 com GCC 13.2.0](https://winlibs.com/)

### Comando:

```bash
g++ -std=c++11 -o simulador.exe simulador.cpp
```
---

## 💡 Contribuindo

Contribuições são bem-vindas! Você pode:

- 💬 Abrir uma [**issue**](https://github.com/brzRaven01001/calculadora-impostos-brazil/issues) com sugestões, erros ou melhorias
- 🍴 Fazer um **fork** e enviar um **Pull Request**
- ⭐ Deixar uma estrela no projeto se achar útil!

---

## 🧾 Licença

Este projeto é de uso livre para fins educacionais e pessoais.
---

<p align="center">
  Feito com ❤️ por <a href="https://github.com/brzRaven01001">Murilo Leone</a>
</p>
