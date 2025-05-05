@interface IESIMShareSchemaPlayRemoteModel : IESIMBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSArray participantsAvatarURLList;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) BOOL isOwnerSecret;
@property (nonatomic) q followStatus;
@property (nonatomic) IESIMURLModel avatarURL;
@property (nonatomic) BOOL blocked;
- (id)avatarURL;
- (long long)followStatus;
- (BOOL)isOwnerSecret;
- (id)participantsAvatarURLList;
- (id)secUid;
- (void)setAvatarURL:;
- (void)setFollowStatus:;
- (void)setIsOwnerSecret:;
- (void)setParticipantsAvatarURLList:;
- (void)setSecUid:;
- (id)uid;
- (void)setUid:;
- (id)totalCount;
- (void).cxx_destruct;
- (BOOL)blocked;
- (void)setBlocked:;
- (void)setTotalCount:;
+ (id)participantsAvatarURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
