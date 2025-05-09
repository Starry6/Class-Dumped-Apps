@interface AWEMRSubscribeManageCell : UICollectionViewCell
@property (nonatomic) AWEMRSubscribeManageContainerView containerView;
@property (nonatomic) UIView topContainer;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UIView titleContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView detailContainer;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView detailImageView;
@property (nonatomic) DUXSwitch aSwitch;
@property (nonatomic) UIView bottomContainer;
@property (nonatomic) AWEMRSubscribeManageOptionCard leftOptionCard;
@property (nonatomic) AWEMRSubscribeManageOptionCard rightOptionCard;
@property (nonatomic) DUXDivider divider;
@property (nonatomic) MASConstraint titleContainerLeftToSuperView;
@property (nonatomic) MASConstraint titleContainerLeftToImageView;
@property (nonatomic) MASConstraint titleContainerRightToDetailContainer;
@property (nonatomic) MASConstraint titleContainerRightToSwitch;
@property (nonatomic) MASConstraint titleContainerBottomToTitleLabel;
@property (nonatomic) MASConstraint titleContainerBottomToSubTitleLabel;
@property (nonatomic) AWEMRSubscribeManageCellConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupBinding;
- (void)setupLayouts;
- (id)topContainer;
- (void)setTopContainer:;
- (void)p_updateLayout;
- (id)leftOptionCard;
- (id)rightOptionCard;
- (void)setLeftOptionCard:;
- (void)setRightOptionCard:;
- (void)p_updateVisibility;
- (void)topContainerDidClick;
- (void)setDetailContainer:;
- (id)detailContainer;
- (void)setTitleContainerLeftToSuperView:;
- (void)setTitleContainerLeftToImageView:;
- (void)setTitleContainerRightToDetailContainer:;
- (void)setTitleContainerRightToSwitch:;
- (void)setTitleContainerBottomToTitleLabel:;
- (void)setTitleContainerBottomToSubTitleLabel:;
- (id)titleContainerLeftToImageView;
- (id)titleContainerLeftToSuperView;
- (id)titleContainerRightToSwitch;
- (id)titleContainerRightToDetailContainer;
- (id)titleContainerBottomToTitleLabel;
- (id)titleContainerBottomToSubTitleLabel;
- (void)containerViewDidLayoutSubviews:;
- (void)switchValueDidChangeTo:;
- (void)leftOptionValueDidChange;
- (void)rightOptionValueDidChange;
- (void)setDetailImageView:;
- (void)setConfig:;
- (BOOL)isExpanded;
- (id)titleImageView;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setupViews;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)aSwitch;
- (void)setASwitch:;
- (void)setDetailLabel:;
- (id)divider;
- (void)setDivider:;
- (void)setTitleContainer:;
- (id)titleContainer;
- (void)expand;
- (void)setTitleImageView:;
- (void)fold;
- (id)bottomContainer;
- (void)setBottomContainer:;
- (id)detailImageView;
+ (double)estimatedHeightForSingleLineExpanded;
+ (double)estimatedHeightForSingleLineFolded;
+ (id)subTitleFont;
@end
