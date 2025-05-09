@interface AWEGCPDetailAuthorInfoView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIStackView infoStackView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView liveMarkView;
@property (nonatomic) MASConstraint avatarSizeConstraint;
@property (nonatomic) MASConstraint liveMarkSizeConstraint;
@property (nonatomic) <IESGCPLiveAnimationService> liveAnimationService;
@property (nonatomic) @? onAuthorInfoTappedBlock;
@property (nonatomic) @? onComponentInfoTappedBlock;
@property (nonatomic) BOOL shouldHiddenTag;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)infoStackView;
- (void)setInfoStackView:;
- (id)liveAnimationService;
- (void)onComponentInfoTapped;
- (void)setAvatarSizeConstraint:;
- (void)setLiveMarkSizeConstraint:;
- (id)onAuthorInfoTappedBlock;
- (id)onComponentInfoTappedBlock;
- (id)avatarSizeConstraint;
- (id)liveMarkSizeConstraint;
- (void)updateWithAvatarImageUrlList:needLiveStoryMark:nickname:tag:roomID:userID:;
- (BOOL)shouldHiddenTag;
- (BOOL)showLiveMarkWithRoomID:userID:;
- (void)onAuthorInfoTapped;
- (void)setupViewStyleWithConfig:;
- (void)updateWithAvatarImageUrlList:nickname:tag:;
- (void)setOnAuthorInfoTappedBlock:;
- (void)setOnComponentInfoTappedBlock:;
- (void)setShouldHiddenTag:;
- (void)setLiveAnimationService:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutView;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setupView;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
@end
