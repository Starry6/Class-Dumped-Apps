@interface MSUDataAccessorSymbolicPathResolver : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)overrideSymbol:resolvedPath:;
- (id)resolve:error:;
+ (id)symbolicPathResolver;
+ (id)resolvedSymbol:error:;
@end
