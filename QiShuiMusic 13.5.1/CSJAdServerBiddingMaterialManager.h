@interface CSJAdServerBiddingMaterialManager : NSObject
- (id)copy;
- (id)mutableCopy;
+ (void)biddingGetMaterialWithSlot:adm:success:failure:;
+ (id)biddingPersistenceWithSlot:type:;
+ (void)biddingPreCacheMaterialWithSlot:success:failure:;
+ (void)biddingPreFetchMaterialWithSlot:requestID:success:failure:;
+ (id)getBiddingPreCacheInfoWithSlot:error:;
+ (id)getBiddingPreCacheMaterialWithSlot:error:;
+ (id)getBiddingPreFetchMaterialWithAdmCreatives:slot:;
+ (id)getBiddingPreFetchMaterialWithKey:slot:type:;
+ (BOOL)invalidDecrypyAdm:;
+ (void)preLoadMaterialsWith:slot:;
+ (void)removeMaterialWithMaterialMeta:adSlot:;
+ (id)allocWithZone:;
+ (id)manager;
@end
