@interface AWEIronManModel : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString name;
@property (nonatomic) NSString ironManTitle;
@property (nonatomic) NSString ironManDescription;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString webURL;
@property (nonatomic) q type;
@property (nonatomic) q orientation;
@property (nonatomic) q state;
@property (nonatomic) NSString summary;
@property (nonatomic) AWEIronManCardModel cardModel;
@property (nonatomic) NSString aladdinID;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)cardModel;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (double)imageIconCornerRadius;
- (id)ironManTitle;
- (id)URLSchema;
- (void)setCardModel:;
- (void)setIronManTitle:;
- (id)ironManDescription;
- (void)setIronManDescription:;
- (id)aladdinID;
- (id)schema;
- (void)setOrientation:;
- (void)setSchema:;
- (id)componentSeparator;
- (id)summary;
- (id)icon;
- (void)setSummary:;
- (id)extra;
- (void)setWebURL:;
- (id)appId;
- (long long)state;
- (long long)type;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)webURL;
- (long long)orientation;
- (void)setState:;
- (id)iconImageName;
- (void)setAppId:;
+ (id)cardModelJSONTransformer;
+ (id)aladdinIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
