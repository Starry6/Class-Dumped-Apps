@interface AVPlayerCaptionLayer : CALayer
@property (nonatomic) AVPlayer player;
@property (nonatomic) {NSEdgeInsets=dddd} captionContentInsets;
@property (nonatomic) BOOL overscanSubtitleSupportEnabled;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)layoutSublayers;
- (id)player;
- (void)setBounds:;
- (void)setPlayer:;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:;
- (void)_startObservingPlayer:;
- (void)_stopObservingPlayer:;
- (void)setCaptionContentInsets:;
- (id)captionContentInsets;
+ (id)captionLayerWithPlayer:;
@end
