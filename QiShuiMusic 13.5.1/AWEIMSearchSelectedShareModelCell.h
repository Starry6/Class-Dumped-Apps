@interface AWEIMSearchSelectedShareModelCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) AWEIMShareModel shareModel;
- (void)configWithShareModel:;
- (void)p_refreshUI;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)shareModel;
- (void)setShareModel:;
+ (id)identifier;
@end
