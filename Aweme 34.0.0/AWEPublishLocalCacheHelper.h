@interface AWEPublishLocalCacheHelper : NSObject
+ (double)firstInstallTime;
+ (id)errorReason:;
+ (void)storeAwemeCacheInvalidInfos:;
+ (void)trackStoreAwemeCacheInvalidInfos:;
+ (long long)cacheInvalidReasonMaxCount;
+ (id)appendTrackSamplingSuffixWithKey:;
+ (BOOL)needUploadErrorDetailForCode:;
+ (void)setupFirstInstallTimeIfNeeded;
+ (id)errorWithCode:extraErrorMsg:;
+ (void)storeAwemeCacheInvalidInfo:;
+ (id)restoreAwemeCacheInvalidInfoWithAwemeID:;
+ (void)trackStoreLocalCacheSucceed:;
+ (void)trackGetCache:awemeModel:imageItem:from:fromScene:uri:isVideo:hit:errorCode:extraErrorMsg:;
+ (void)trackRemoveCache:from:removeReason:removeCacheAge:removeCacheSize:totalSize:;
@end
