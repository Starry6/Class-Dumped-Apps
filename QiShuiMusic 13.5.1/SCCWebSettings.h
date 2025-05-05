@interface SCCWebSettings : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) q maxWaitTime;
@property (nonatomic) q maxReloadCount;
@property (nonatomic) NSMutableArray allowList;
@property (nonatomic) NSMutableArray denyDict;
@property (nonatomic) NSMutableArray allowListForJumpAPP;
- (void)setMaxWaitTime:;
- (id)allowListForJumpAPP;
- (id)denyDict;
- (long long)maxReloadCount;
- (long long)maxWaitTime;
- (void)setAllowListForJumpAPP:;
- (void)setDenyDict:;
- (void)setMaxReloadCount:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setAllowList:;
- (void)setEnable:;
- (id)allowList;
- (id)copyWithZone:;
@end
