@interface AWETrendDetailResponse : AWEBaseApiModel
@property (nonatomic) NSArray trendsInfo;
@property (nonatomic) AWEUnifiedMusicGroupModel unifiedMusic;
@property (nonatomic) NSString useSameAction;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString commonTrack;
- (id)trendsInfo;
- (void)setTrendsInfo:;
- (id)unifiedMusic;
- (void)setUnifiedMusic:;
- (id)useSameAction;
- (id)commonTrack;
- (void)setCommonTrack:;
- (id)trendInfoModel;
- (void)setUseSameAction:;
- (id)initWithDictionary:error:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)trendsInfoJSONTransformer;
+ (id)unifiedMusicJSONTransformer;
+ (id)relatedListJSONTransformer;
+ (id)mvTemplateInfoJSONTransformer;
+ (id)promotionModelJSONTransformer;
+ (id)bannerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
