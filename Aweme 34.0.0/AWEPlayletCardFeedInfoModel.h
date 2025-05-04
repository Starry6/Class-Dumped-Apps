@interface AWEPlayletCardFeedInfoModel : AWEBaseApiModel
@property (nonatomic) AWEPlayletInfoModel playletInfo;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) q cardScene;
- (id)aweme;
- (void)setAweme:;
- (id)playletInfo;
- (void)setPlayletInfo:;
- (long long)cardScene;
- (void)setCardScene:;
- (void).cxx_destruct;
+ (id)isEqualBlock;
+ (id)awemeJSONTransformer;
+ (id)playletInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
