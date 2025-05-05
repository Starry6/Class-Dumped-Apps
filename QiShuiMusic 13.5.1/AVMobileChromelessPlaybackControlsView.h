@interface AVMobileChromelessPlaybackControlsView : AVView
@property (nonatomic) AVMobileChromelessControlsStyleSheet styleSheet;
@property (nonatomic) BOOL playPauseButtonShowsPlayIcon;
@property (nonatomic) Q leftSecondaryControlIcon;
@property (nonatomic) Q rightSecondaryControlIcon;
@property (nonatomic) <AVMobileChromelessPlaybackControlsViewDelegate> delegate;
- (id)initWithStyleSheet:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateRightSecondaryControlIcon;
- (void)setStyleSheet:;
- (void)setDelegate:;
- (void)setPlayPauseButtonShowsPlayIcon:;
- (unsigned long long)leftSecondaryControlIcon;
- (id)styleSheet;
- (void)_addPlaybackControlViews:;
- (void)leftSecondaryControlWasPressed;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)rightSecondaryControlIcon;
- (BOOL)playPauseButtonShowsPlayIcon;
- (void)setLeftSecondaryControlIcon:;
- (void)_updateLeftSecondaryControlIcon;
- (void)playPauseButtonWasPressed;
- (void)rightSecondaryControlWasPressed;
- (void)setRightSecondaryControlIcon:;
@end
