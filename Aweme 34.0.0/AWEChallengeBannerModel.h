@interface AWEChallengeBannerModel : MTLModel
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString complianceData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpenURL:;
- (void)setComplianceData:;
- (id)complianceData;
- (id)icon;
- (void)setWebURL:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)webURL;
- (id)openURL;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
