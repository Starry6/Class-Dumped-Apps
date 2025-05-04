@interface AWESearchUserAvatarComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) UIImage avatarLocalImage;
@property (nonatomic) NSString identificationUrl;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString time;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (id)avatarLocalImage;
- (id)identificationUrl;
- (void)setAvatarLocalImage:;
- (void)setIdentificationUrl:;
- (id)time;
- (void)setTime:;
- (id)userName;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (void)setUserName:;
@end
