@interface AWEShareTokenNoteEcommerceView : AWEShareTokenNoteBaseCardView
@property (nonatomic) UIView ecommerceContainerView;
@property (nonatomic) double firstInitTime;
- (void)setupUIWithModel:;
- (void)setFirstInitTime:;
- (void)dismissButtonTapped;
- (void)goToEcommerce;
- (double)firstInitTime;
- (void)actionButtonClick;
- (void)mainImageClick;
- (void)viewDidShow;
- (id)ecommerceContainerView;
- (void)setEcommerceContainerView:;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
