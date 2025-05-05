@interface TTAccountChainLoginUserInfoModel : NSObject
@property (nonatomic) BOOL shouldSharedLogin;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSArray avatarUrl;
@property (nonatomic) NSString avatar;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString dTicket;
@property (nonatomic) NSDictionary extraInfo;
- (id)dTicket;
- (id)avatarUrl;
- (id)secUserId;
- (void)setAvatarUrl:;
- (void)setDTicket:;
- (void)setExtraInfo:;
- (void)setSecUserId:;
- (void)setShouldSharedLogin:;
- (BOOL)shouldSharedLogin;
- (id)nickName;
- (void).cxx_destruct;
- (void)setNickName:;
- (id)avatar;
- (void)setAvatar:;
- (id)extraInfo;
@end
