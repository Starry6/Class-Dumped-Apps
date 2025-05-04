@interface AWEMVSelectedBillboardEntranceHolderView : UIView
@property (nonatomic) UIStackView containerStackView;
- (id)initWithFrame:models:;
- (void)updateWithEntranceModelArray:;
- (void)refreshRedPointStatus;
- (void)setupUIWithModels:;
- (void)removeArrangedSubviews:fromStackView:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)themeDidChange;
- (id)containerStackView;
- (void)setContainerStackView:;
+ (double)viewHeight;
@end
