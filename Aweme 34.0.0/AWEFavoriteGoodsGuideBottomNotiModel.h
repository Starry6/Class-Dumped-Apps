@interface AWEFavoriteGoodsGuideBottomNotiModel : AWEBaseApiModel
@property (nonatomic) NSString mainGuideText;
@property (nonatomic) NSString subGuideText;
@property (nonatomic) AWEURLModel guidePic;
@property (nonatomic) NSString buttonText;
@property (nonatomic) Q collectType;
@property (nonatomic) q maxExposeCount;
- (unsigned long long)collectType;
- (void)setCollectType:;
- (long long)maxExposeCount;
- (id)mainGuideText;
- (id)subGuideText;
- (id)guidePic;
- (void)setMainGuideText:;
- (void)setSubGuideText:;
- (void)setGuidePic:;
- (void)setMaxExposeCount:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)guidePicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
