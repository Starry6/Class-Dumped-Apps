@interface AWESearchMiddleGSRequstManager : NSObject
+ (id)currentUid;
+ (void)requestGSDataWithContext:;
+ (void)clearGSDataCache:;
+ (id)cacheKeyList;
+ (void)cacheGSDataWithContext:gsData:;
+ (void)requestGSDataWithURL:requestParams:useNewInterface:completion:;
+ (id)fetchCacheGSDataWithContext:;
+ (id)cacheInfo;
@end
