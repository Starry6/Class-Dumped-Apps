@interface SSWishlist : NSObject
@property (nonatomic) q accountIdentifier;
@property (nonatomic) NSNumber lastSyncTime;
- (void)dealloc;
- (long long)accountIdentifier;
- (id)initWithAccountIdentifier:;
- (void)performTransactionWithBlock:;
- (BOOL)deleteBackingStore;
- (id)lastSyncTime;
- (void)setLastSyncTime:;
+ (BOOL)existsForAccountIdentifier:;
@end
