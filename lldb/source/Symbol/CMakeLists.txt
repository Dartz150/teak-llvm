set(LLVM_OPTIONAL_SOURCES LocateSymbolFileMacOSX.cpp)

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
  set(PLATFORM_SOURCES LocateSymbolFileMacOSX.cpp)
endif()

add_lldb_library(lldbSymbol
  ArmUnwindInfo.cpp
  Block.cpp
  TypeSystemClang.cpp
  ClangASTImporter.cpp
  ClangASTMetadata.cpp
  ClangExternalASTSourceCallbacks.cpp
  ClangUtil.cpp
  CompactUnwindInfo.cpp
  CompileUnit.cpp
  CompilerDecl.cpp
  CompilerDeclContext.cpp
  CompilerType.cpp
  CxxModuleHandler.cpp
  DWARFCallFrameInfo.cpp
  DebugMacros.cpp
  Declaration.cpp
  DeclVendor.cpp
  FuncUnwinders.cpp
  Function.cpp
  LineEntry.cpp
  LineTable.cpp
  LocateSymbolFile.cpp
  ObjectFile.cpp
  PostfixExpression.cpp
  Symbol.cpp
  SymbolContext.cpp
  SymbolFile.cpp
  SymbolVendor.cpp
  Symtab.cpp
  Type.cpp
  TypeList.cpp
  TypeMap.cpp
  TypeSystem.cpp
  UnwindPlan.cpp
  UnwindTable.cpp
  Variable.cpp
  VariableList.cpp

  ${PLATFORM_SOURCES}

  LINK_LIBS
    lldbCore
    lldbExpression
    lldbHost
    lldbTarget
    lldbUtility
    lldbPluginExpressionParserClang
    lldbPluginSymbolFileDWARF
    lldbPluginSymbolFilePDB
    lldbPluginObjCLanguage
    lldbPluginObjCRuntime

  CLANG_LIBS
    clangAST
    clangBasic
    clangFrontend

  LINK_COMPONENTS
    Support
  )
