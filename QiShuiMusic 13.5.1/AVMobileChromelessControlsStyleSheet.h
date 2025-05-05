@interface AVMobileChromelessControlsStyleSheet : AVMobileControlsStyleSheet
@property (nonatomic) UIFont timeLabelFont;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) UIFont subtitleFont;
@property (nonatomic) UIFont infoAffordanceButtonFont;
@property (nonatomic) UIFont prominentContentTagFont;
@property (nonatomic) UIFont contentTagFont;
@property (nonatomic) UIFont playPauseButtonFont;
@property (nonatomic) UIFont secondaryPlaybackControlsFont;
- (id)subtitleFont;
- (id)titleFont;
- (id)embeddedInlineInsets;
- (id)landscapeFullscreenInsets;
- (double)standardPaddingFullScreen;
- (id)secondaryPlaybackControlsFont;
- (id)contentTagFont;
- (id)infoAffordanceButtonFont;
- (double)standardPaddingInline;
- (void).cxx_destruct;
- (id)prominentContentTagFont;
- (id)initWithTraitCollection:;
- (id)timeLabelFont;
- (id)portraitFullscreenInsets;
- (id)playPauseButtonFont;
@end
