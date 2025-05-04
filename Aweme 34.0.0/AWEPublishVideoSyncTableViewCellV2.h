@interface AWEPublishVideoSyncTableViewCellV2 : AWENewPublishTableCell
@property (nonatomic) UIStackView iconContainer;
@property (nonatomic) UIImageView moreIcon;
- (id)moreIcon;
- (void)setAwe_disableEdit:;
- (void)setMoreIcon:;
- (void)updateWithVideoSyncModel:;
- (void)setUp;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)iconContainer;
- (void)setIconContainer:;
@end
