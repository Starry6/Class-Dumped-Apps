@interface CAWhitePointRamper : CAWindowServerRamper
@property (nonatomic) {?=[9f]} whitePointStart;
@property (nonatomic) {?=[9f]} whitePointEnd;
@property (nonatomic) float scaleStart;
@property (nonatomic) float scaleEnd;
- (id)initWithDisplay:;
- (void)rampCallback:;
- (id)whitePointStart;
- (void)setWhitePointStart:;
- (id)whitePointEnd;
- (void)setWhitePointEnd:;
- (float)scaleStart;
- (void)setScaleStart:;
- (float)scaleEnd;
- (void)setScaleEnd:;
@end
