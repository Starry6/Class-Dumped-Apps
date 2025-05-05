@interface UIMutableSceneAsynchronousRenderingOptions : UISceneAsynchronousRenderingOptions
@property (nonatomic) NSArray renderTimes;
@property (nonatomic) double renderPeriod;
@property (nonatomic) float renderMaxAPL;
- (void)setRenderMaxAPL:;
- (void)setRenderTimes:;
- (void)setRenderPeriod:;
- (id)copyWithZone:;
@end
