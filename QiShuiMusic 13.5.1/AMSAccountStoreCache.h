@interface AMSAccountStoreCache : NSObject
+ (id)accountStoreForMediaType:;
+ (void)_resetAccountStoreCache;
+ (id)mediaTypeForAccountStore:;
+ (id)cache;
@end
