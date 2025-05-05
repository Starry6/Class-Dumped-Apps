@interface POPAnimationTracer : NSObject
@property (nonatomic) NSArray allEvents;
@property (nonatomic) NSArray writeEvents;
@property (nonatomic) BOOL shouldLogAndResetOnCompletion;
- (void)updateFriction:;
- (void)updateVelocity:;
- (id)eventsWithType:;
- (void)autoreversed;
- (void)didReachToValue:;
- (void)didStop:;
- (void)readPropertyValue:;
- (void)setShouldLogAndResetOnCompletion:;
- (BOOL)shouldLogAndResetOnCompletion;
- (void)updateBounciness:;
- (void)updateFromValue:;
- (void)updateMass:;
- (void)updateSpeed:;
- (void)updateTension:;
- (void)updateToValue:;
- (id)writeEvents;
- (void)writePropertyValue:;
- (void)start;
- (void)stop;
- (id)allEvents;
- (void).cxx_destruct;
- (void)reset;
- (void)didStart;
- (id)initWithAnimation:;
@end
