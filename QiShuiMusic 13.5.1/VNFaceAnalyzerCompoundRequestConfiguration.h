@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration
@property (nonatomic) NSMutableArray originalRequests;
@property (nonatomic) NSString detectorType;
- (void)setResolvedRevision:;
- (void)setDetectorConfigurationOption:value:;
- (void)setDetectorType:;
- (id)detectorType;
- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (id)initWithRequestClass:;
- (void)setDetectorConfigurationOptions:;
- (id)originalRequests;
- (id)copyWithZone:;
@end
