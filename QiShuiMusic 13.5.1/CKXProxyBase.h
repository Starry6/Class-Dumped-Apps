@interface CKXProxyBase : NSObject
@property (nonatomic) CKXBackingStore backingStore;
@property (nonatomic) q scope;
@property (nonatomic) BOOL committed;
- (void)commit;
- (void)setScope:;
- (id)backingStore;
- (long long)scope;
- (void).cxx_destruct;
- (BOOL)isMutable;
- (void)reset;
- (id)_init;
- (BOOL)committed;
- (void)associateWithBackingStore:;
@end
