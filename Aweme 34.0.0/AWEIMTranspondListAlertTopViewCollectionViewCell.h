@interface AWEIMTranspondListAlertTopViewCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) AWEIMShareModel shareModel;
@property (nonatomic) UIImageView verifiedLogoView;
- (void)p_refreshUI;
- (id)verifiedLogoView;
- (void)setVerifiedLogoView:;
- (void)configWithShareModel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setShareModel:;
- (id)shareModel;
+ (id)identifier;
@end
