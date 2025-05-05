@interface CIKernelLibrary : NSObject
@property (nonatomic) Q functionCount;
- (id)initWithData:error:;
- (void)dealloc;
- (unsigned long long)functionCount;
- (id)newFunctionWithName:;
- (id)functionNames;
- (void)initFunctionNames;
- (id)newSpecializedFunctionWithName:constants:;
- (id)newMTLLibraryWithSource:source:error:;
- (id)newMTLLibraryWithData:data:error:;
- (id)initWithSource:error:;
- (id)functionWithName:;
+ (id)coreImageDylibWithDevice:;
+ (id)internalLibraryWithName:device:;
+ (id)libraryWithSource:error:;
+ (id)libraryWithData:error:;
@end
