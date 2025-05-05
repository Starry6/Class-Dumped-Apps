@interface TLKActivityIndicatorView : TLKView
@property (nonatomic) UIActivityIndicatorView activityIndicator;
@property (nonatomic) TLKLabel subtitleLabel;
@property (nonatomic) TLKMultilineText subtitle;
- (void)tlk_updateForAppearance:;
- (id)subtitleLabel;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSubtitleLabel:;
- (id)activityIndicator;
- (void)setSubtitle:;
- (void)setActivityIndicator:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)subtitle;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)subtitleLabelText;
- (BOOL)usesDefaultLayoutMargins;
@end
