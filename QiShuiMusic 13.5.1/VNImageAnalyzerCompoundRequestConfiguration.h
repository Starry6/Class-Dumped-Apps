@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration
@property (nonatomic) NSString detectorType;
@property (nonatomic) NSDictionary detectorConfigurationOptions;
@property (nonatomic) NSArray originalRequestConfigurations;
- (void)setDetectorType:;
- (id)detectorType;
- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (void)setDetectorConfigurationOptions:;
- (id)copyWithZone:;
- (id)originalRequestConfigurations;
- (void)setOriginalRequestConfigurations:;
@end
