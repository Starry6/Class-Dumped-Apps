@interface HMDCPUBinaryImageInfo : NSObject
@property (nonatomic) NSDictionary binaryMap;
@property (nonatomic) BOOL isBinaryLoad;
@property (nonatomic) NSMutableDictionary cpuArchMap;
- (id)getBinaryImage:;
- (void)loadBinaryImage;
- (id)binaryMap;
- (id)cpuArchMap;
- (id)getBinaryImagesWithBinaryImages:;
- (id)getCPUArchWithMajor:minor:;
- (BOOL)isBinaryLoad;
- (void)setBinaryMap:;
- (void)setCpuArchMap:;
- (void)setIsBinaryLoad:;
- (void).cxx_destruct;
@end
