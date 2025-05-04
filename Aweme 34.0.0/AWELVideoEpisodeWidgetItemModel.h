@interface AWELVideoEpisodeWidgetItemModel : MTLModel
@property (nonatomic) q offset;
@property (nonatomic) q preOffset;
@property (nonatomic) q duration;
@property (nonatomic) q widgetType;
@property (nonatomic) NSString widgetJSON;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)preOffset;
- (void)setPreOffset:;
- (id)widgetJSON;
- (void)setWidgetJSON:;
- (void)setOffset:;
- (long long)offset;
- (void)setWidgetType:;
- (long long)widgetType;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
