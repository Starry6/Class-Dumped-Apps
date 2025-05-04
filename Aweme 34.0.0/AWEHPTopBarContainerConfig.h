@interface AWEHPTopBarContainerConfig : MTLModel
@property (nonatomic) NSArray leftCTAConfigs;
@property (nonatomic) NSArray rightCTAConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftCTAConfigs;
- (void)setLeftCTAConfigs:;
- (id)rightCTAConfigs;
- (void)setRightCTAConfigs:;
- (void).cxx_destruct;
+ (id)leftCTAConfigsJSONTransformer;
+ (id)rightCTAConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
