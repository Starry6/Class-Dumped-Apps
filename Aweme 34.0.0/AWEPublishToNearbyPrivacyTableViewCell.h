@interface AWEPublishToNearbyPrivacyTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView<AWEPublishToNearbyPrivacySelectionViewProtocol> selectNearbyPrivacyView;
@property (nonatomic) UIView yellowPointView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)yellowPointView;
- (void)setYellowPointView:;
- (void)__buildUI;
- (void)__layoutUI;
- (id)initWithStyle:reuseIdentifier:selectNearbyPrivacyView:;
- (void)setSelectNearbyPrivacyView:;
- (id)selectNearbyPrivacyView;
- (void)showYellowPointViewIfNeeds;
- (void)hiddenYellowPointView;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
@end
