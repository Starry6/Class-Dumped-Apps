@interface AWELiveHTTPClient : NSObject
@property (nonatomic) BOOL enableSyncCookie;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestIdForResponseObj:;
- (id)logIDForResponseObj:;
- (id)dictionaryFromResponseHeader:;
- (id)requestWithParamsModel:;
- (id)handleError:withResponseObj:;
- (id)uploadFileData:URLString:progress:parameters:completionHandler:fileType:;
- (void)addNetWorkRequestFilter;
- (id)getLiveHTTPTask:;
- (BOOL)enableSyncCookie;
- (BOOL)p_isPollingMessageURL:;
- (id)requestByChunkModelWithParamsModel:;
- (id)p_postRawDataWithParamsModel:;
- (id)synchronizedPOST:headerFields:parameters:;
- (void)setEnableSyncCookie:;
- (id)init;
- (id)baseURL;
@end
