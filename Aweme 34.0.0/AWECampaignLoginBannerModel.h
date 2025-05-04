@interface AWECampaignLoginBannerModel : MTLModel
@property (nonatomic) AWECampaignImageModel image;
@property (nonatomic) NSString text;
@property (nonatomic) UIImage loginBannerImage;
@property (nonatomic) BOOL isReady;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loginBannerImage;
- (void)setLoginBannerImage:;
- (id)image;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (BOOL)isReady;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)setIsReady:;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
