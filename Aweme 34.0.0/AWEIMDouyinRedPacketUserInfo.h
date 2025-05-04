@interface AWEIMDouyinRedPacketUserInfo : AWEBaseApiModel
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString avatar;
@property (nonatomic) NSNumber fansStatus;
@property (nonatomic) NSString uid;
@property (nonatomic) NSArray multiAvatarUrlList;
- (id)secUid;
- (void)setSecUid:;
- (id)fansStatus;
- (void)setFansStatus:;
- (id)multiAvatarUrlList;
- (void)setMultiAvatarUrlList:;
- (id)nickname;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (void)setNickname:;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
