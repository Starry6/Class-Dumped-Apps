@interface BDUGLuckyDogAudioPlaybackSession : NSObject
@property (nonatomic) AVQueuePlayer player;
@property (nonatomic) NSArray playerItems;
@property (nonatomic) q status;
@property (nonatomic) float rateTarget;
@property (nonatomic) NSString urlString;
@property (nonatomic) BOOL needLoop;
@property (nonatomic) <BDUGLuckyDogAudioPlaybackSessionDelegate> delegate;
- (id)playerItemsWithURL:loopEnabled:;
- (void)audioSessionDidInterrupted:;
- (id)initWithURLString:loopEnabled:;
- (BOOL)needLoop;
- (float)rateTarget;
- (void)setRateTarget:;
- (id)urlString;
- (void)setStatus:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)resume;
- (id)player;
- (id)delegate;
- (void).cxx_destruct;
- (long long)status;
- (void)pause;
- (id)playerItems;
@end
