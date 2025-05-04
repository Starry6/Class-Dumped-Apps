@interface AWEPublishAdvanceSettingsVideoSyncCell : AWEPublishAdvanceSettingsTableViewCell
@property (nonatomic) UIStackView buttonContainer;
@property (nonatomic) UIButton ulikeButton;
@property (nonatomic) UIButton xiguaButton;
@property (nonatomic) AWEPublishAdvanceSettingsItem item;
- (void)buttonDidClick:;
- (id)ulikeButton;
- (id)xiguaButton;
- (void)setUlikeButton:;
- (void)setXiguaButton:;
- (id)buttonContainer;
- (void)setItem:;
- (id)item;
- (id)initWithStyle:reuseIdentifier:;
- (void)setButtonContainer:;
- (void).cxx_destruct;
- (void)updateWithItem:;
@end
