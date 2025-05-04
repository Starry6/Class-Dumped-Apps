@interface AWENaviAvatarModel : MTLModel
@property (nonatomic) q uid;
@property (nonatomic) BOOL hasVirtualCharacter;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString data;
@property (nonatomic) NSDictionary emotionData;
@property (nonatomic) NSString avatarId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSecUserId:;
- (id)secUserId;
- (id)avatarId;
- (BOOL)hasVirtualCharacter;
- (void)setHasVirtualCharacter:;
- (id)emotionData;
- (void)setEmotionData:;
- (void)setAvatarId:;
- (void)setUid:;
- (long long)uid;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)emotionDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
