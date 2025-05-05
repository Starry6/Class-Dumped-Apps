@interface AMapFlowControlConfig : AMapCloudConfig
@property (nonatomic) NSArray blockConfig;
@property (nonatomic) NSDictionary domainMaps;
- (id)blockConfig;
- (id)domainMaps;
- (id)initWithCloudConfig:;
- (void).cxx_destruct;
@end
