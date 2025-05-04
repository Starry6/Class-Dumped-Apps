@interface AWEVideoCoverSafeAreaMaskView : UIView
@property (nonatomic) CALayer maskLayer1;
@property (nonatomic) CALayer maskLeyer2;
@property (nonatomic) UIView cropBorderView;
@property (nonatomic) UILabel hitLabel;
@property (nonatomic) {CGSize=dd} aspectRatio;
- (void)setHitLabelHide:;
- (id)maskLayer1;
- (id)maskLeyer2;
- (id)cropBorderView;
- (id)hitLabel;
- (id)p_safeRect;
- (void)setMaskLayer1:;
- (void)setMaskLeyer2:;
- (void)setCropBorderView:;
- (void)setHitLabel:;
- (id)initWithFrame:;
- (void)setAspectRatio:;
- (void).cxx_destruct;
- (id)aspectRatio;
- (void)layoutSubviews;
@end
