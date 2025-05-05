@interface VEPaintConfig : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) float strokeStep;
@property (nonatomic) float strokeSize;
@property (nonatomic) float featherSize;
@property (nonatomic) float speedInfluence;
@property (nonatomic) NSInteger type;
- (void)setFeatherSize:;
- (float)featherSize;
- (id)paintConfigToStr;
- (void)setSpeedInfluence:;
- (void)setStrokeStep:;
- (float)speedInfluence;
- (float)strokeStep;
- (id)init;
- (void)setColor:;
- (void)setType:;
- (id)color;
- (int)type;
- (void).cxx_destruct;
- (float)strokeSize;
- (void)setStrokeSize:;
@end
