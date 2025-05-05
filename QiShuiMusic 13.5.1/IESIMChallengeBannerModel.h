@interface IESIMChallengeBannerModel : MTLModel
@property (nonatomic) IESIMURLModel icon;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpenURL:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (id)openURL;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
