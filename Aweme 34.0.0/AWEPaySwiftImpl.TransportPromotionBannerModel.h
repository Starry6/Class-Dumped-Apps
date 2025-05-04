@interface AWEPaySwiftImpl.TransportPromotionBannerModel : MTLModel
@property (nonatomic) NSString bannerImgURL;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString themeStr;
- (id)jumpURL;
- (void)setJumpURL:;
- (id)bannerImgURL;
- (void)setBannerImgURL:;
- (id)themeStr;
- (void)setThemeStr:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
