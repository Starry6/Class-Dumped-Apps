@interface IESGurdByteSyncMessageManager : NSObject
+ (void)handleClearCacheMessage:taskId:;
+ (int)businessIdWithType:;
+ (void)handleCheckUpdateMessage:taskId:;
+ (void)handleDownloadPackagesMessage:taskId:;
+ (void)handleMessageDictionary:;
+ (id)modelWithByteSyncDictionary:accessKey:;
+ (id)parseUrlList:uriKey:;
+ (void)recordStatsWithMessageDictionary:shouldHandle:;
+ (void)registerCustomParamKey:getValueBlock:forAccessKey:;
+ (void)setupWithType:;
@end
