@interface BDCTCaptureRenderLoadingView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIVisualEffectView blurEffectView;
@property (nonatomic) BDCTWaitingView indicatorView;
- (void)initLayout;
- (id)backgroundImageView;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setBackgroundImageView:;
- (id)blurEffectView;
- (void)setBlurEffectView:;
@end
