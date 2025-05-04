@interface AWEShareSchemaPlayRemoteModel : AWEBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSArray participantsAvatarURLList;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) BOOL isOwnerSecret;
@property (nonatomic) q followStatus;
@property (nonatomic) AWEURLModel avatarURL;
@property (nonatomic) BOOL blocked;
- (long long)followStatus;
- (id)secUid;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setFollowStatus:;
- (void)setSecUid:;
- (id)participantsAvatarURLList;
- (void)setParticipantsAvatarURLList:;
- (BOOL)isOwnerSecret;
- (void)setIsOwnerSecret:;
- (void)setUid:;
- (id)totalCount;
- (id)uid;
- (void).cxx_destruct;
- (BOOL)blocked;
- (void)setBlocked:;
- (void)setTotalCount:;
+ (id)participantsAvatarURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
