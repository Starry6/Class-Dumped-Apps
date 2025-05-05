@interface CAAccessibilityRamper : CAWindowServerRamper
@property (nonatomic) double axScaleBegin;
@property (nonatomic) double axScaleEnd;
- (id)initWithDisplay:;
- (void)rampCallback:;
- (double)axScaleBegin;
- (void)setAxScaleBegin:;
- (double)axScaleEnd;
- (void)setAxScaleEnd:;
@end
