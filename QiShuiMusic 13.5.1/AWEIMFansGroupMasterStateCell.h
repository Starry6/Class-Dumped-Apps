@interface AWEIMFansGroupMasterStateCell : UICollectionViewCell
@property (nonatomic) UIImageView leftIndicatorView;
@property (nonatomic) UIButton leftIndicatorClickButton;
@property (nonatomic) UIButton groupStateButton;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLable;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UILabel limitLabel;
@property (nonatomic) UIButton enterChatButton;
@property (nonatomic) UIImageView swipeImageView;
@property (nonatomic) <AWEIMFansGroupMasterStateCellDelegate> delegate;
@property (nonatomic) AWEIMFansGroupMasterItemViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterChatButton;
- (void)__enterChatButtonAction;
- (void)__groupStateButtonAction:;
- (void)__setupUI;
- (void)__swipeImageViewPanGes:;
- (void)__updateGroupStateButtonUI;
- (void)configWithViewModel:;
- (id)groupStateButton;
- (void)iesim_themeReload;
- (id)leftIndicatorClickButton;
- (id)leftIndicatorView;
- (id)limitLabel;
- (id)nameLable;
- (void)setEnterChatButton:;
- (void)setGroupStateButton:;
- (void)setLeftIndicatorClickButton:;
- (void)setLeftIndicatorView:;
- (void)setLimitLabel:;
- (void)setNameLable:;
- (void)setSwipeImageView:;
- (id)swipeImageView;
- (id)viewModel;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setViewModel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)numberLabel;
- (void)setNumberLabel:;
+ (double)nameLableRight;
+ (id)identifier;
@end
