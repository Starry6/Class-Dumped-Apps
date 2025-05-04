@interface AWENewSpotlightDonateInfo : MTLModel
@property (nonatomic) NSArray appDonateList;
@property (nonatomic) NSArray funcDonateList;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appDonateList;
- (void)setAppDonateList:;
- (id)funcDonateList;
- (void)setFuncDonateList:;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
+ (id)appDonateListJSONTransformer;
+ (id)funcDonateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
