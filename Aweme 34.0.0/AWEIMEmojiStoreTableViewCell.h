@interface AWEIMEmojiStoreTableViewCell : UITableViewCell
@property (nonatomic) UIImageView emojiImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton addButton;
@property (nonatomic) AWEIMmoticonThemeResponseModel emojiPackage;
@property (nonatomic) <AWEIMEmojiStoreTableViewCellDelegate> delegate;
- (id)emojiPackage;
- (void)setEmojiImageView:;
- (id)emojiImageView;
- (void)__setupUIs;
- (void)setEmojiPackage:;
- (void)trackEmojiPackageDisplayOtherInfos:;
- (void)__refreshAddButtonUI;
- (void)__didClickAdd;
- (void)__packageDidChangeInstallStatusNotification:;
- (void)__renderPackageData;
- (void)dealloc;
- (id)delegate;
- (void)setHighlighted:animated:;
- (void)setSubtitleLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)subtitleLabel;
- (id)addButton;
- (void)setAddButton:;
@end
