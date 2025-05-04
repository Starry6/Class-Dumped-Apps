@interface AWEGeneralSearchBackgroundModel : AWEBaseApiModel
@property (nonatomic) AWEGeneralSearchHeaderBackgroundModel headerBackgroundModel;
@property (nonatomic) AWEGeneralSearchResultHearderBackgroundModel resultHeaderBackgroundModel;
@property (nonatomic) AWEGeneralSearchResultBackgroundModel resultBackgroundModel;
@property (nonatomic) AWEGeneralSearchResultAnimationBackgroundModel resultAnimationBackgroundModel;
@property (nonatomic) double isAlwaysDisplayWhenScroll;
- (id)resultBackgroundModel;
- (id)resultHeaderBackgroundModel;
- (id)headerBackgroundModel;
- (void)setResultBackgroundModel:;
- (void)setResultAnimationBackgroundModel:;
- (void)setIsAlwaysDisplayWhenScroll:;
- (void)setResultHeaderBackgroundModel:;
- (void)setHeaderBackgroundModel:;
- (id)resultAnimationBackgroundModel;
- (double)isAlwaysDisplayWhenScroll;
- (void).cxx_destruct;
+ (id)headerBackgroundModelJSONTransformer;
+ (id)resultHeaderBackgroundModelJSONTransformer;
+ (id)resultBackgroundModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
