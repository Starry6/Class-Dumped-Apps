@interface AWEIMRecommendInvitationUserSelectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMUserViewModel userViewModel;
@property (nonatomic) BOOL isUserSelected;
@property (nonatomic) BDImageView avatarImageView;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UILabel userNameLabel;
- (id)selectImageView;
- (id)userNameLabel;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:;
- (void)updateUserSelected:;
- (void)toggleUserSelected;
- (void)setIsUserSelected:;
- (void)__setSelectImageWithSelected:;
- (id)userViewModel;
- (id)initWithFrame:;
- (BOOL)isUserSelected;
- (void).cxx_destruct;
- (id)avatarImageView;
@end
