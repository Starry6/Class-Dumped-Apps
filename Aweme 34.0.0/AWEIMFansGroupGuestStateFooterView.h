@interface AWEIMFansGroupGuestStateFooterView : UICollectionReusableView
@property (nonatomic) UIView baseView;
@property (nonatomic) UILabel lable;
@property (nonatomic) UIImageView icon;
@property (nonatomic) <AWEIMFansGroupGuestStateFooterViewDelegate> delegate;
- (void)__setupUI;
- (id)lable;
- (void)setLable:;
- (void)__handelTapbaseViewWithGesture:;
- (void)configWithText:imageName:;
- (id)delegate;
- (void)setBaseView:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)baseView;
+ (id)identifier;
+ (double)height;
@end
