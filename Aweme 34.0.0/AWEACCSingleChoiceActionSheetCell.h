@interface AWEACCSingleChoiceActionSheetCell : UITableViewCell
@property (nonatomic) UIView background;
@property (nonatomic) UILabel title;
@property (nonatomic) UILabel subTitle;
- (void)p_setupUI;
- (void)configWithModel:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)background;
- (void)setBackground:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
