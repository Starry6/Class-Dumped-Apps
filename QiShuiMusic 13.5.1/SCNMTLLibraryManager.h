@interface SCNMTLLibraryManager : NSObject
- (void)dealloc;
- (id)initWithDevice:;
- (id)device;
- (void)clearCompiledLibraries;
- (id)frameworkLibrary;
- (id)defaultLibrary;
- (id)commonProfileCacheLibrary;
- (id)shaderCompilationGroup;
- (void)waitForShadersCompilation;
- (void)_setEngineStats:;
- (id)deviceQueue;
- (id)libraryForFile:;
- (id)libraryForSourceCode:options:;
- (void)libraryForProgramDesc:completionHandler:;
+ (id)hashCodeForSource:macros:;
@end
