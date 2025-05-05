@interface TUSoundPlayer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) TURepeatingActor repeatingActor;
@property (nonatomic) I soundID;
@property (nonatomic) BOOL playing;
- (id)init;
- (BOOL)isPlaying;
- (void)playSound:iterations:pauseDurationBetweenIterations:;
- (void)playSound:iterations:pauseDurationBetweenIterations:completion:;
- (id)repeatingActor;
- (void)playSound:;
- (void)setSoundID:;
- (void).cxx_destruct;
- (unsigned int)soundID;
- (void)playSoundIndefinitely:pauseDurationBetweenIterations:;
- (id)queue;
- (void)stopPlaying;
@end
