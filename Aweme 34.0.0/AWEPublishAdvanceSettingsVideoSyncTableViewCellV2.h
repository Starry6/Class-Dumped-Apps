@interface AWEPublishAdvanceSettingsVideoSyncTableViewCellV2 : AWEPublishAdvanceSettingsTableViewCell
@property (nonatomic) UIStackView iconContainer;
@property (nonatomic) UIImageView moreIcon;
@property (nonatomic) AWEPublishAdvanceSettingsItem item;
- (id)moreIcon;
- (void)setAwe_disableEdit:;
- (void)setMoreIcon:;
- (void)updateWithVideoSyncModel:;
- (void)setupIconContainer;
- (void)setItem:;
- (id)item;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)updateWithItem:;
- (id)iconContainer;
- (void)setIconContainer:;
@end
