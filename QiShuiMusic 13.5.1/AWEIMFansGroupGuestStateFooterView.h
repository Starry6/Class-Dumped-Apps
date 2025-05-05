@interface AWEIMFansGroupGuestStateFooterView : UICollectionReusableView
@property (nonatomic) UIView baseView;
@property (nonatomic) UILabel lable;
@property (nonatomic) UIImageView icon;
@property (nonatomic) <AWEIMFansGroupGuestStateFooterViewDelegate> delegate;
- (void)__handelTapbaseViewWithGesture:;
- (void)__setupUI;
- (id)lable;
- (void)setLable:;
- (void)setDelegate:;
- (id)icon;
- (id)initWithFrame:;
- (id)baseView;
- (id)delegate;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setBaseView:;
+ (id)identifier;
+ (double)height;
@end
