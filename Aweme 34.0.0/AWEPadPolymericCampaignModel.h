@interface AWEPadPolymericCampaignModel : MTLModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)tag;
- (void)setIdentifier:;
- (void)setTag:;
- (void)setSubTitle:;
- (id)identifier;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
