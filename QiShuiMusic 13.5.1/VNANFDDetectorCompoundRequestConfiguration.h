@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration
@property (nonatomic) NSDictionary detectorConfigurationOptions;
@property (nonatomic) NSMutableArray originalRequests;
@property (nonatomic) NSString detectorType;
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
