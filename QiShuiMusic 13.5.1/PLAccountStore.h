@interface PLAccountStore : ACAccountStore
@property (nonatomic) ACAccount cachedPrimaryAppleAccount;
- (id)init;
- (void)dealloc;
- (void)accountDidChange:;
- (id)cachedPrimaryAppleAccount;
- (void).cxx_destruct;
- (void)clearCachedProperties;
+ (id)pl_sharedAccountStore;
@end
