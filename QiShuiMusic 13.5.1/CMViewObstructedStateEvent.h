@interface CMViewObstructedStateEvent : NSObject
@property (nonatomic) BOOL shouldSuppress;
@property (nonatomic) C currentState;
@property (nonatomic) NSString orientation;
@property (nonatomic) NSString motionType;
@property (nonatomic) float lux;
@property (nonatomic) float pocketProbability;
@property (nonatomic) NSArray meanProbabilities;
- (void)setCurrentState:;
- (void)dealloc;
- (unsigned char)currentState;
- (id)orientation;
- (void)setMotionType:;
- (id)motionType;
- (BOOL)shouldSuppress;
- (id)description;
- (void)setOrientation:;
- (float)lux;
- (id)initWithShouldSupress:currentState:orientation:motionType:lux:pocketProbability:meanProbabilitiesFloatArray:;
- (void)setShouldSuppress:;
- (void)setLux:;
- (float)pocketProbability;
- (void)setPocketProbability:;
- (id)meanProbabilities;
- (void)setMeanProbabilities:;
@end
