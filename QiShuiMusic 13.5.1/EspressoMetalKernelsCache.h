@interface EspressoMetalKernelsCache : NSObject
@property (nonatomic) NSDictionary m_kernelCache;
@property (nonatomic) NSString kernelPrefix;
- (id)kernelForFunction:;
- (BOOL)wasSetup;
- (id)m_kernelCache;
- (void)setM_kernelCache:;
- (id)kernelForFunction:cacheString:withConstants:;
- (id)kernelPrefix;
- (void)setKernelPrefix:;
- (void).cxx_destruct;
- (BOOL)shouldUseTexArray;
- (void)lazySetup;
- (void)addLibraryAtPath:;
- (id)initWithDevice:;
- (void)loadLibraryNamed:;
- (id).cxx_construct;
@end
