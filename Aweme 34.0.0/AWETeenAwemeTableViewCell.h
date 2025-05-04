@interface AWETeenAwemeTableViewCell : UITableViewCell
@property (nonatomic) AWETeenCustomDisplayViewModel cellModel;
@property (nonatomic) AWETeenCustomDisplayViewController viewController;
@property (nonatomic) UIViewController parentVC;
- (void)replaceViewController:removeIfExisting:;
- (void)setCellModel:;
- (void)p_setupParentVC:;
- (void)p_removeChildVC;
- (void)configWithModel:parentVC:;
- (void)p_addChildVC;
- (id)viewController;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)cellModel;
- (id)parentVC;
- (void)setParentVC:;
@end
