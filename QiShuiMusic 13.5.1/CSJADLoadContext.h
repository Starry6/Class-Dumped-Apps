@interface CSJADLoadContext : NSObject
@property (nonatomic) CSJAdSlot slot;
@property (nonatomic) CSJMaterialMeta material;
@property (nonatomic) CSJADLoadDurationModel loadDurationModel;
@property (nonatomic) CSJADLoadSplashContext splashContext;
- (void)setLoadDurationModel:;
- (void)setSplashContext:;
- (id)splashContext;
- (id)loadDurationModel;
- (id)slot;
- (void)setSlot:;
- (void).cxx_destruct;
- (id)material;
- (void)setMaterial:;
@end
