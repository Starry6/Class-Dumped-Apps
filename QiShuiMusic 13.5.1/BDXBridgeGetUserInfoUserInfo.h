@interface BDXBridgeGetUserInfoUserInfo : BDXBridgeModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString shortID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSNumber hasBoundPhone;
@property (nonatomic) NSNumber isBoundPhone;
- (id)shortID;
- (id)avatarURL;
- (id)hasBoundPhone;
- (id)isBoundPhone;
- (id)secUserID;
- (void)setAvatarURL:;
- (void)setHasBoundPhone:;
- (void)setIsBoundPhone:;
- (void)setSecUserID:;
- (void)setShortID:;
- (id)userID;
- (id)uniqueID;
- (id)nickname;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
