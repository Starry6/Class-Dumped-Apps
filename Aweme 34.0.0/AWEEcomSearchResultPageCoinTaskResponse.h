@interface AWEEcomSearchResultPageCoinTaskResponse : AWEBaseApiModel
@property (nonatomic) BOOL isShowBanner;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEEcomSearchBannerModel banner;
- (void)setLogExtra:;
- (id)logExtra;
- (BOOL)isShowBanner;
- (void)setIsShowBanner:;
- (id)banner;
- (void)setBanner:;
- (void).cxx_destruct;
+ (id)bannerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
