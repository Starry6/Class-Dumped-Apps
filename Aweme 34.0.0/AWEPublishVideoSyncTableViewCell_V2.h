@interface AWEPublishVideoSyncTableViewCell_V2 : UITableViewCell
@property (nonatomic) AWEPublishVideoSyncModel_V2 syncModel;
@property (nonatomic) AWEPublishVideoSyncAppModel model;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) DUXSwitch statusSwitch;
@property (nonatomic) UIView line;
@property (nonatomic) DUXPopover popover;
- (void)setSyncModel:;
- (id)syncModel;
- (id)statusSwitch;
- (void)statusSwitched:;
- (void)bindAppModel:videoSyncModel:;
- (void)setStatusSwitch:;
- (void)setModel:;
- (id)model;
- (id)popover;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (id)line;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setPopover:;
- (void)setIconImageView:;
- (void)setLine:;
- (void)setNameLabel:;
- (void)setUpUI;
- (void)setLineHidden:;
@end
