@interface AWEIMLightInteractionDebuplicationManager : NSObject
@property (nonatomic) NSMutableDictionary lastSendLITimeDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)shouldFilterUserWithUid:;
- (void)markDidSendLIToUserWithUid:;
- (void)p_readLastSendLITimeDictFromDisk;
- (id)lastSendLITimeDict;
- (void)setLastSendLITimeDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (BOOL)enabledDeduplicate;
+ (double)p_deduplicationTimeInterval;
+ (void)removeSurplusItemsIfNeedOfDict:withMaxCount:;
+ (id)p_getCurrentUserCacheKey;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
