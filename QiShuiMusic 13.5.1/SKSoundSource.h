@interface SKSoundSource : NSObject
@property (nonatomic) BOOL shouldLoop;
@property (nonatomic) double gain;
@property (nonatomic) {CGPoint=dd} position;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) NSInteger completedBufferCount;
@property (nonatomic) NSInteger queuedBufferCount;
- (void)setPosition:;
- (double)gain;
- (id)position;
- (id)init;
- (BOOL)isPlaying;
- (void)dealloc;
- (BOOL)play;
- (void)stop;
- (void).cxx_destruct;
- (id)description;
- (void)pause;
- (void)setGain:;
- (void)queueBuffer:;
- (BOOL)shouldLoop;
- (void)setShouldLoop:;
- (int)completedBufferCount;
- (int)queuedBufferCount;
- (void)purgeCompletedBuffers;
+ (id)source;
+ (id)sourceWithBuffer:;
@end
