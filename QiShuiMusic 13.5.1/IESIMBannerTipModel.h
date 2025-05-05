@interface IESIMBannerTipModel : IESIMBaseApiModel
@property (nonatomic) q bannerType;
@property (nonatomic) NSString bannerText;
@property (nonatomic) q linkType;
@property (nonatomic) NSString linkURL;
@property (nonatomic) NSString linkText;
@property (nonatomic) BOOL hasClosed;
- (void)setLinkType:;
- (void).cxx_destruct;
- (long long)linkType;
- (void)setHasClosed:;
- (BOOL)hasClosed;
- (id)bannerText;
- (long long)bannerType;
- (void)setBannerType:;
- (id)linkText;
- (id)linkURL;
- (void)setLinkText:;
- (void)setLinkURL:;
- (void)setBannerText:;
+ (id)bannerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
