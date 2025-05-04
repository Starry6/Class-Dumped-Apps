@interface AWEAdCustomHeaderWebViewUserAvatarView : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UIImageView verifyUser;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString barType;
@property (nonatomic) {CGSize=dd} size;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setBarType:;
- (void)updateContentViewWithModel:;
- (id)verifyUser;
- (id)initWithModel:size:;
- (void)setVerifyUser:;
- (id)barType;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)avatar;
- (void)avatarTapped:;
- (void)setAvatar:;
@end
