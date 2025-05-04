@interface AWEIMSkylightDotView : UIView
@property (nonatomic) UIView dotBgView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UIImageView iconUrlView;
- (void)p_setupUI;
- (BOOL)isAppear;
- (void)setDotColorString:;
- (void)setDotUrl:placeHolder:;
- (void)hidSubviews;
- (id)dotBgView;
- (id)iconUrlView;
- (void)setDotBgView:;
- (void)setIconUrlView:;
- (void)setDotBackgroundColor:;
- (void)setDotBgColor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)dotView;
- (void)setDotView:;
- (void)setDotColor:;
@end
