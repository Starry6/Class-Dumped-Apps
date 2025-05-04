@interface AWETemplateStaticLabelInfoModel : AWEBaseApiModel
@property (nonatomic) AWETemplateStaticLabelStyleModel style;
@property (nonatomic) NSArray containers;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSString trackInfo;
@property (nonatomic) NSArray datas;
@property (nonatomic) NSArray externalEvents;
- (id)externalEvents;
- (void)setExternalEvents:;
- (id)containers;
- (void)setContainers:;
- (id)actions;
- (id)style;
- (void).cxx_destruct;
- (void)setActions:;
- (void)setStyle:;
- (id)datas;
- (void)setDatas:;
- (void)setTrackInfo:;
- (id)trackInfo;
+ (id)datasJSONTransformer;
+ (id)styleJSONTransformer;
+ (id)actionsJSONTransformer;
+ (id)containersJSONTransformer;
+ (id)externalEventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
