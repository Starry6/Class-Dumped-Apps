@interface AWEIMTranspondListAlertTopViewCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) AWEIMShareModel shareModel;
@property (nonatomic) UIImageView verifiedLogoView;
- (void)configWithShareModel:;
- (void)p_refreshUI;
- (void)setVerifiedLogoView:;
- (id)verifiedLogoView;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)shareModel;
- (void)setShareModel:;
+ (id)identifier;
@end
