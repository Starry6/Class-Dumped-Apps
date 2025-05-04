@interface AWEIncentiveChatPrivateChatNoFriendsCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) AWEButton findFriendsButton;
@property (nonatomic) NSDictionary trackDict;
- (void)setTrackDict:;
- (id)trackDict;
- (id)findFriendsButton;
- (void)setFindFriendsButton:;
- (void)setDescriptionLabel:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setupUI;
@end
