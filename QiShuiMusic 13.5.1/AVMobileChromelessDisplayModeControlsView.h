@interface AVMobileChromelessDisplayModeControlsView : AVView
@property (nonatomic) AVMobileChromelessControlsStyleSheet styleSheet;
@property (nonatomic) Q fullscreenIcon;
@property (nonatomic) BOOL includesPictureInPictureControl;
@property (nonatomic) BOOL includesFullscreenControl;
@property (nonatomic) <AVMobileChromelessDisplayModeControlsViewDelegate> delegate;
- (id)initWithStyleSheet:;
- (void)setIncludesPictureInPictureControl:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setStyleSheet:;
- (void)setDelegate:;
- (void)setFullscreenIcon:;
- (void)_addDisplayModeControlViews:;
- (unsigned long long)fullscreenIcon;
- (id)styleSheet;
- (void)pictureInPictureControlWasPressed;
- (id)delegate;
- (void).cxx_destruct;
- (void)setIncludesFullscreenControl:;
- (BOOL)includesFullscreenControl;
- (void)fullScreenButtonWasPressed;
- (void)_updateFullscreenControlIcon;
- (BOOL)includesPictureInPictureControl;
@end
