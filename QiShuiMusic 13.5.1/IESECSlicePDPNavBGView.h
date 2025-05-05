@interface IESECSlicePDPNavBGView : IESECSliceXViewElementView
@property (nonatomic) UIView scrollView;
@property (nonatomic) UIView backgroundBlurredView;
@property (nonatomic) UIView maskView;
- (void)sendScrollView:;
- (BOOL)updateWithSliceXElement:error:;
- (void)setScrollView:;
- (id)maskView;
- (void)layoutSubviews;
- (id)scrollView;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setupUI;
- (id)backgroundBlurredView;
- (void)setBackgroundBlurredView:;
@end
