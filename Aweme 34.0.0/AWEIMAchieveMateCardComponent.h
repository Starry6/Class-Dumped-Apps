@interface AWEIMAchieveMateCardComponent : AWEIMFlexComponent
@property (nonatomic) BOOL hasPlayedAnimation;
@property (nonatomic) NSMutableSet hasTrackShownStickerSet;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)p_trackStickerViewWithEmoticonModel:event:;
- (id)hasTrackShownStickerSet;
- (BOOL)checkAnimationHasPlayed;
- (void)playClashAnimationOnce;
- (BOOL)hasPlayedAnimation;
- (void)setHasPlayedAnimation:;
- (void)syncHasPlayed;
- (void)setHasTrackShownStickerSet:;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
