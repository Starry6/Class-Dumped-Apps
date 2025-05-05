@interface PHAssetResourceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)consolidateAssets:completionHandler:;
- (void)assetResourceRequest:didFinishWithError:;
- (int)requestDataForAssetResource:options:dataReceivedHandler:completionHandler:;
- (void)writeDataForAssetResource:toFile:options:completionHandler:;
- (int)requestWriteDataForAssetResource:toFile:options:completionHandler:;
- (void)cancelDataRequest:;
- (int)requestFileURLForAssetResource:options:urlReceivedHandler:completionHandler:;
- (id)infoForRequest:;
- (id)reconnectAssets:urlResolvingHandler:completionHandler:;
- (void)_autoResolveReferencedResources:folderURL:resourceClient:;
- (int)_nextRequestID;
- (int)_requestForAssetResource:loadURLOnly:options:urlReceivedHandler:dataReceivedHandler:completionHandler:;
+ (void)vcp_reportDownload:withTaskID:;
+ (int)vcp_inMemoryDownload:withTaskID:toData:cancel:;
+ (int)vcp_requestFileURLForAssetResource:withTaskID:toResourceURL:cancel:;
+ (int)vcp_requestFileURLForAssetResource:withTaskID:timeoutHandler:urlHandler:andCompletionHandler:;
+ (id)defaultManager;
+ (unsigned long long)_nextManagerID;
@end
