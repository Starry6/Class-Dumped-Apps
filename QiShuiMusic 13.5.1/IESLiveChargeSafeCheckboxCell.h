@interface IESLiveChargeSafeCheckboxCell : UITableViewCell
@property (nonatomic) UIButton checkboxButton;
@property (nonatomic) UILabel remindLabel;
@property (nonatomic) @? changeSelectedStatus;
- (void)setRemindLabel:;
- (id)changeSelectedStatus;
- (void)refreshText:;
- (id)remindLabel;
- (void)setChangeSelectedStatus:;
- (void)touchSelectButton:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)checkboxButton;
- (void)setCheckboxButton:;
@end
