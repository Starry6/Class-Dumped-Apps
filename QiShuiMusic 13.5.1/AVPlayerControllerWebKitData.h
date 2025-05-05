@interface AVPlayerControllerWebKitData : NSObject
@property (nonatomic) BOOL scrubbing;
@property (nonatomic) double seekToTime;
@property (nonatomic) <AVPlayerControllerWebKitDelegate> delegate;
- (BOOL)isScrubbing;
- (double)seekToTime;
- (void)setScrubbing:;
- (void)setSeekToTime:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPlayerController:;
@end
