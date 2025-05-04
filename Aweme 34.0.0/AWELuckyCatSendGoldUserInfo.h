@interface AWELuckyCatSendGoldUserInfo : AWEBaseApiModel
@property (nonatomic) NSString reqID;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) Q userProcessStatus;
@property (nonatomic) Q userFollowStatus;
@property (nonatomic) NSString sendGoldCollectDesc;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString nickName;
@property (nonatomic) Q messageStatus;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setReqID:;
- (id)reqID;
- (void)setUserFollowStatus:;
- (unsigned long long)userFollowStatus;
- (unsigned long long)userProcessStatus;
- (void)setUserProcessStatus:;
- (id)sendGoldCollectDesc;
- (void)setSendGoldCollectDesc:;
- (void)setNickName:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)nickName;
- (unsigned long long)messageStatus;
- (void)setMessageStatus:;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
