@interface AWEECOMIMDynamicCardPerfCreateViewEvent : AWEECOMIMDynamicCardPerfEvent
@property (nonatomic) double createViewTime;
@property (nonatomic) BOOL hitTemplateCache;
@property (nonatomic) double loadTemplateTime;
@property (nonatomic) double totalTime;
- (BOOL)hitTemplateCache;
- (double)createViewTime;
- (double)loadTemplateTime;
- (void)setCreateViewTime:;
- (void)setHitTemplateCache:;
- (void)setLoadTemplateTime:;
- (double)totalTime;
- (void)setTotalTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
