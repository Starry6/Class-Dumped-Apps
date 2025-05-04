@interface AWETeenLongPressSettingCell : UITableViewCell
@property (nonatomic) UIView mainView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UIView leftSubView;
@property (nonatomic) UIView rightSubView;
@property (nonatomic) AWETeenLongPressPanelBaseViewModel panelViewModel;
@property (nonatomic) CAShapeLayer contentShapeLayer;
- (id)titleLable;
- (void)setTitleLable:;
- (id)panelViewModel;
- (void)setMainView:;
- (id)leftSubView;
- (void)setLeftSubView:;
- (id)contentShapeLayer;
- (void)setContentShapeLayer:;
- (id)rightSubView;
- (void)setRightSubView:;
- (void)setPanelViewModel:;
- (void)setDefaultUIWithVM:;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (id)mainView;
@end
