@interface AnnieGetUserInfoUserInfoModel : IESLiveBridgeModel
@property (nonatomic) NSString shortID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) BOOL isBoundPhone;
- (id)shortID;
- (id)avatarURL;
- (BOOL)isBoundPhone;
- (id)secUserID;
- (void)setAvatarURL:;
- (void)setIsBoundPhone:;
- (void)setSecUserID:;
- (void)setShortID:;
- (id)userID;
- (id)nickName;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setNickName:;
@end
