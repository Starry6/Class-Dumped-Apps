@interface AWENoxusExtraInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL popUp;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) NSString titleBefore;
@property (nonatomic) NSString titleAfter;
@property (nonatomic) NSString watermarkUrl;
@property (nonatomic) BOOL skipAd;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)titleBefore;
- (id)titleAfter;
- (BOOL)popUp;
- (id)watermarkUrl;
- (void)setPopUp:;
- (void)setTitleBefore:;
- (void)setTitleAfter:;
- (void)setWatermarkUrl:;
- (BOOL)skipAd;
- (void)setSkipAd:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
