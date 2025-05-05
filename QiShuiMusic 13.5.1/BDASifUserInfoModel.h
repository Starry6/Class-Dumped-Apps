@interface BDASifUserInfoModel : NSObject
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString bindPhone;
@property (nonatomic) NSNumber isLogin;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) NSString userId;
- (id)avatarUrl;
- (id)bindPhone;
- (id)secUserId;
- (void)setAvatarUrl:;
- (void)setBindPhone:;
- (void)setIsLogin:;
- (void)setSecUserId:;
- (id)uniqueId;
- (id)userId;
- (void)setUniqueId:;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
- (id)isLogin;
@end
