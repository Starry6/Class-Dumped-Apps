@interface UITextHighlightView : UIView
@property (nonatomic) @? previewProvider;
@property (nonatomic) UIPreviewParameters overriddenPreviewParameters;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)previewProvider;
- (id)initWithPreviewProvider:;
- (void)animateWithCompletion:;
- (void)fadeAwayWithCompletion:;
- (void)_updateWithPreviewParameters:;
- (void)setOverriddenPreviewParameters:;
- (void)invalidateContentView;
- (id)overriddenPreviewParameters;
+ (id)preferredPreviewParametersForTextLineRects:;
@end
