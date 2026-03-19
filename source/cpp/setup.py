from setuptools import setup, Extension
from Cython.Build import cythonize

# 🧩 Define a Cython extension module
ext = Extension(
    name='solution',              # 📦 Name of the compiled module (import as 'solution')
    sources=['solution.pyx'],     # 📄 Cython source file
    language='c++'                # ⚙️ Use C++ compiler (since we integrate C++ code)
)

# 🚀 Setup configuration for building the extension
setup(
    ext_modules=cythonize(
        ext,                     # 🔗 Convert .pyx → C/C++ → compiled module
        language_level=3         # 🐍 Use Python 3 syntax rules
    )
)