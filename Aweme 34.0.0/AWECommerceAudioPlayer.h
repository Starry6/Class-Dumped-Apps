@interface AWECommerceAudioPlayer : NSObject
@property (nonatomic) AVPlayer player;
@property (nonatomic) AVPlayerItem currentPlayerItem;
@property (nonatomic) NSString currentURLString;
@property (nonatomic) @? readyToPlayBlock;
@property (nonatomic) @? finishBlock;
@property (nonatomic) @? failedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentURLString;
- (void)setCurrentURLString:;
- (void)playWith:;
- (void)clearPlayer;
- (id)readyToPlayBlock;
- (void)setReadyToPlayBlock:;
- (void)removePlayerItemObserver;
- (void)addPlayerItemObserver;
- (void)avPlayerDidFinish:;
- (void)seekToTime:;
- (void)play;
- (id)player;
- (void)setPlayer:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)pause;
- (void)setFailedBlock:;
- (id)failedBlock;
- (id)currentPlayerItem;
- (void)setCurrentPlayerItem:;
- (void)setFinishBlock:;
- (id)finishBlock;
+ (id)sharedPlayer;
@end
