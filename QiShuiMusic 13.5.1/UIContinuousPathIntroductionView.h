@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay
@property (nonatomic) UIView textVideoContainer;
@property (nonatomic) UILabel landscapeTextBody;
@property (nonatomic) UIView keyboardView;
@property (nonatomic) UIButton landscapeButton;
@property (nonatomic) NSArray portraitConstraints;
@property (nonatomic) NSArray landscapeConstraints;
@property (nonatomic) AVPlayerLayer videoLayer;
@property (nonatomic) NSLayoutConstraint videoWidth;
@property (nonatomic) NSLayoutConstraint videoHeight;
- (void)removeFromSuperview;
- (void)setVideoHeight:;
- (void)setVideoLayer:;
- (void)setKeyboardView:;
- (id)videoWidth;
- (void)setVideoWidth:;
- (id)landscapeConstraints;
- (void)traitCollectionDidChange:;
- (id)keyboardView;
- (void).cxx_destruct;
- (id)videoLayer;
- (id)portraitConstraints;
- (id)videoHeight;
- (id)initWithKeyboardAppearance:;
- (void)extraButtonTapAction;
- (void)setupConstraintData;
- (id)_introductionMovieAssetURL;
- (id)mediaContents;
- (void)updateVideoLayerWithNewVideo:;
- (id)textTitleDescriptions;
- (id)textBodyDescriptions;
- (double)mediaLayoutWidthAdjustment;
- (long long)textBodyMaxLines;
- (id)textVideoContainer;
- (void)setTextVideoContainer:;
- (id)landscapeTextBody;
- (void)setLandscapeTextBody:;
- (id)landscapeButton;
- (void)setLandscapeButton:;
- (void)setPortraitConstraints:;
- (void)setLandscapeConstraints:;
@end
