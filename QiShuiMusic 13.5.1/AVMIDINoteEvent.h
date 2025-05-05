@interface AVMIDINoteEvent : AVMusicEvent
@property (nonatomic) ^{MIDINoteMessage=CCCCf} message;
@property (nonatomic) I channel;
@property (nonatomic) I key;
@property (nonatomic) I velocity;
@property (nonatomic) double duration;
- (unsigned int)velocity;
- (void)setChannel:;
- (void)setVelocity:;
- (unsigned int)channel;
- (unsigned int)key;
- (void)setDuration:;
- (id)initWithMessage:;
- (void)setKey:;
- (BOOL)isEqualTo:;
- (id)message;
- (double)duration;
- (id)initWithChannel:key:velocity:duration:;
@end
