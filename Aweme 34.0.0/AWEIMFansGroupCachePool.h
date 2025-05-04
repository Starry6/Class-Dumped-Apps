@interface AWEIMFansGroupCachePool : NSObject
@property (nonatomic) NSCache fansGroupCache;
@property (nonatomic) NSCache ownerSameCreatorCache;
@property (nonatomic) NSCache normalCache;
- (id)fansGroupCache;
- (id)normalCache;
- (id)ownerSameCreatorCache;
- (void)setFansGroupCache:;
- (void)setOwnerSameCreatorCache:;
- (void)setNormalCache:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)isOwnerSameCreatorWithConversationId:;
+ (BOOL)isFansGroupWithAWEIMConversation:;
+ (BOOL)isOwnerSameCreatorWithAWEIMConversation:;
+ (BOOL)isCreatorFansGroupWithIESIMConversation:;
+ (BOOL)isLiveFansGroupWithIESIMConversation:;
+ (BOOL)isFansGroupWithIESIMConversation:;
+ (long long)__checkCacheForConversationId:;
+ (BOOL)__checkConversationIsGroupTypeWithIESIMConversation:cache:;
+ (long long)__getConversationInfoFromDiskWithIESIMConversation:cache:;
+ (BOOL)isOwnerSameCreatorWithIESIMConversation:;
+ (id)sharedInstance;
@end
