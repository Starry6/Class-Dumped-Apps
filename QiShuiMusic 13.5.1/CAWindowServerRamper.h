@interface CAWindowServerRamper : NSObject
@property (nonatomic) CAWindowServerDisplay display;
@property (nonatomic) CADisplay cadisplay;
@property (nonatomic) CADisplayLink link;
@property (nonatomic) double duration;
@property (nonatomic) NSInteger id;
@property (nonatomic) double beginTime;
- (id)link;
- (double)beginTime;
- (int)id;
- (void)setDisplay:;
- (void)setLink:;
- (id)display;
- (void)setDuration:;
- (void)setBeginTime:;
- (id)initWithDisplay:;
- (double)duration;
- (void)rampCallback:;
- (void)runRamp;
- (id)cadisplay;
- (void)setCadisplay:;
- (void)setId:;
@end
