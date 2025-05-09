@interface TTMixVideoPlayer : NSObject
@property (nonatomic) {?={?=qiIq}{?=qiIq}} videoRange;
@property (nonatomic) {?=qiIq} audioTime;
@property (nonatomic) NSString videoFileName;
@property (nonatomic) NSString audioFileName;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) <TTMixVideoPlayerDelegate> delegate;
@property (nonatomic) UIView playerView;
@property (nonatomic) double playingTime;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} renderRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioTime;
- (void)play:videoRange:audioFileName:audioTime:;
- (double)playingTime;
- (id)renderRect;
- (void)resuse;
- (void)seek:completion:;
- (void)setAudioTime:;
- (void)setIsSeeking:;
- (void)setRenderRect:;
- (void)setVideoFileName:;
- (void)setVideoRange:;
- (void)updateVideoRange:;
- (id)videoFileName;
- (id)init;
- (void)dealloc;
- (void)play;
- (BOOL)isSeeking;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)delegate;
- (void).cxx_destruct;
- (id)playerView;
- (void)pause;
- (id)videoRange;
- (void)seek:;
- (id)audioFileName;
- (void)setAudioFileName:;
@end
