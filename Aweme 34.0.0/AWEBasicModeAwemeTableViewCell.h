@interface AWEBasicModeAwemeTableViewCell : UITableViewCell
@property (nonatomic) AWEBasicModeCustomDisplayViewModel cellModel;
@property (nonatomic) AWEBasicModeCustomDisplayViewController viewController;
- (void)setCellModel:;
- (void)p_setupParentVC:;
- (void)p_addChildVC:;
- (void)p_removeChildVC;
- (void)configWithModel:parentVC:;
- (id)viewController;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)cellModel;
@end
