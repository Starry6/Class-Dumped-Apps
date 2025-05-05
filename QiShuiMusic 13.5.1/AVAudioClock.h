@interface AVAudioClock : NSObject
@property (nonatomic) AVAudioTime currentTime;
- (id)init;
- (void)dealloc;
- (id)initWithNode:;
- (id)currentTime;
- (id)currentAudioTimeStamp;
- (long long)currentIONumberFrames;
- (id)awaitIOCycle:;
@end
