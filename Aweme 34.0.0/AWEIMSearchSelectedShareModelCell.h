@interface AWEIMSearchSelectedShareModelCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) AWEIMShareModel shareModel;
- (void)p_refreshUI;
- (void)configWithShareModel:;
- (id)avatarURL:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setShareModel:;
- (id)shareModel;
+ (id)identifier;
@end
