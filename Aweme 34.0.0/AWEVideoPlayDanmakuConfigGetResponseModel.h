@interface AWEVideoPlayDanmakuConfigGetResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray configList;
@property (nonatomic) NSArray danmakuGuideList;
- (id)configList;
- (void)setConfigList:;
- (id)danmakuGuideList;
- (void)setDanmakuGuideList:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)configListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
