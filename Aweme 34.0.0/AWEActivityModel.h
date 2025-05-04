@interface AWEActivityModel : AWEBaseApiModel
@property (nonatomic) NSString linkText;
@property (nonatomic) NSString linkSubText;
@property (nonatomic) NSString arrowText;
@property (nonatomic) AWEURLModel linkIcon;
@property (nonatomic) NSString linkSchema;
@property (nonatomic) AWEURLModel bannerInfo;
@property (nonatomic) AWESearchAladdinButtonStyle buttonStyle;
- (id)linkSchema;
- (void)setLinkSchema:;
- (id)bannerInfo;
- (id)arrowText;
- (id)linkSubText;
- (void)setLinkSubText:;
- (void)setArrowText:;
- (void)setLinkIcon:;
- (void)setBannerInfo:;
- (id)buttonStyle;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (id)linkText;
- (void)setLinkText:;
- (id)linkIcon;
+ (id)bannerInfoJSONTransformer;
+ (id)linkIconJSONTransformer;
+ (id)buttonStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
