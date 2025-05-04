@interface AWEIMAudioEmojiPlayerComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMAudioEmojiPlayer audioEmojiPlayer;
@property (nonatomic) BOOL didAutoPlay;
@property (nonatomic) BOOL onScreenOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)onCellWillRenderForCurrentComponent;
- (void)multiSelectedStateDidChanged:;
- (void)audioEmojiPlayer:statusDidChangeFrom:toStaus:;
- (void)setOnScreenOpt:;
- (void)stopPlayerIfRecalledMessageIsPlaying:;
- (void)p_setupPlayer:;
- (void)didClickAudioEmojiWithEnterMethod:;
- (id)audioEmojiPlayer;
- (void)stopPlayAudioEmoji;
- (void)setAudioEmojiPlayer:;
- (BOOL)onScreenOpt;
- (void)p_autoPlayAudioIfNeeded;
- (BOOL)didAutoPlay;
- (void)setDidAutoPlay:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
