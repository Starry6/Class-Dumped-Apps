@interface IESECStoreCustomAccountInfoView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAccountInfoViewWithStyle:;
- (void)updateAccountInfoViewWithModel:;
- (void)doAnimationIfNeeded;
- (void)updateAccountInfoViewWithPercent:;
- (void)setStackView:;
- (void)setDelegate:;
- (void)setWidth:;
- (id)stackView;
- (id)initWithFrame:;
- (double)width;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (double)viewHeight;
@end
