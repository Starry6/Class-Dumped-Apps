@interface HMDFlameGraphInfo : NSObject
@property (nonatomic) NSDictionary binaryMap;
@property (nonatomic) BOOL isBinaryLoad;
@property (nonatomic) NSMutableDictionary cpuArchMap;
@property (nonatomic) NSMutableSet imageNameSet;
@property (nonatomic) NSArray backtraces;
- (void)loadBinaryImage;
- (id)binaryMap;
- (id)cpuArchMap;
- (void)defaultInitialize;
- (id)getBinaryImagesWithBinaryImages:;
- (id)getCPUArchWithMajor:minor:;
- (id)imageNameSet;
- (id)initWithBacktraces:;
- (BOOL)isBinaryLoad;
- (id)reportArray;
- (id)reportImages;
- (void)setBinaryMap:;
- (void)setCpuArchMap:;
- (void)setImageNameSet:;
- (void)setIsBinaryLoad:;
- (void)setupWithParams:;
- (id)backtraces;
- (void)setBacktraces:;
- (void).cxx_destruct;
@end
