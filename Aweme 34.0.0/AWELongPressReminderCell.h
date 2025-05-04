@interface AWELongPressReminderCell : AWELongPressPanelSettingCell
@property (nonatomic) UIView mainView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWELongPressReminderMultiAvatarView multiAvatarView;
@property (nonatomic) <AWELongPressReminderCellDelegate> delegate;
- (void)setMainView:;
- (id)multiAvatarView;
- (void)setMultiAvatarView:;
- (void)setDefaultUI:;
- (void)closeBtnDidClick;
- (id)delegate;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)mainView;
- (void)setUpUI;
@end
