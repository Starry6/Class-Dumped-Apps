@interface AWEModernLongPressReminderCell : UITableViewCell
@property (nonatomic) UIView mainView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWELongPressReminderMultiAvatarView multiAvatarView;
@property (nonatomic) AWELongPressPanelBaseViewModel longPressPanelVM;
@property (nonatomic) <AWEModernLongPressReminderCellDelegate> delegate;
- (void)setMainView:;
- (id)multiAvatarView;
- (void)setMultiAvatarView:;
- (void)setDefaultUI:;
- (id)longPressPanelVM;
- (void)setLongPressPanelVM:;
- (void)closeBtnDidClick;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)mainView;
- (void)setUpUI;
@end
