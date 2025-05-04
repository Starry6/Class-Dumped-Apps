@interface AWECodeGenAwemeGuideDanmakuModel : AWEBaseDataModel
@property (nonatomic) NSString danmakuKey;
@property (nonatomic) AWECodeGenAwemeGuideDanmakuShowLimitsModel showLimitsModel;
@property (nonatomic) AWECodeGenAwemeGuideDanmakuEnterModel enterModel;
@property (nonatomic) AWECodeGenAwemeGuideDanmakuExitModel exitModel;
@property (nonatomic) NSArray contentListModelArray;
- (void)setEnterModel:;
- (id)enterModel;
- (id)danmakuKey;
- (id)contentListModelArray;
- (id)exitModel;
- (id)showLimitsModel;
- (void)setDanmakuKey:;
- (void)setShowLimitsModel:;
- (void)setExitModel:;
- (void)setContentListModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
