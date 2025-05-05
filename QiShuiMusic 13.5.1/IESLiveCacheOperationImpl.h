@interface IESLiveCacheOperationImpl : NSObject
@property (nonatomic) NSMutableDictionary cacheItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cleanWithVisitType:extraParams:;
- (void)addCacheItems:;
- (id)getAllCacheItems;
- (unsigned long long)getCleanSizeWithVisitType:;
- (void)registerCacheItem:;
- (void)setCacheItems:;
- (id)init;
- (void).cxx_destruct;
- (id)cacheItems;
@end
