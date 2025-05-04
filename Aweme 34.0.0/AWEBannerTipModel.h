@interface AWEBannerTipModel : AWEBaseApiModel
@property (nonatomic) q bannerType;
@property (nonatomic) NSString bannerText;
@property (nonatomic) q linkType;
@property (nonatomic) NSString linkURL;
@property (nonatomic) NSString linkText;
@property (nonatomic) BOOL hasClosed;
- (long long)linkType;
- (void).cxx_destruct;
- (void)setLinkType:;
- (BOOL)hasClosed;
- (void)setHasClosed:;
- (id)bannerText;
- (id)linkURL;
- (void)setLinkURL:;
- (id)linkText;
- (void)setLinkText:;
- (long long)bannerType;
- (void)setBannerType:;
- (void)setBannerText:;
+ (id)bannerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
