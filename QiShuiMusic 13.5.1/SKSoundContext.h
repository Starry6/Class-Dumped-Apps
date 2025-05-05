@interface SKSoundContext : NSObject
@property (nonatomic) double gain;
@property (nonatomic) {CGPoint=dd} listenerPosition;
@property (nonatomic) BOOL suspended;
- (double)gain;
- (id)init;
- (void)dealloc;
- (BOOL)suspended;
- (void)setGain:;
- (void)setSuspended:;
- (void)setListenerPosition:;
- (id)listenerPosition;
- (void)makeCurrentContext;
+ (id)context;
+ (id)currentContext;
@end
