@interface PLAssetResourceDownloadManager : NSObject
- (void)cancelRequest:;
- (id)init;
- (void).cxx_destruct;
- (id)_requestWithID:;
- (void)_setRequest:forRequestID:;
- (int)requestCloudResourceType:assetObjectID:library:progressHandler:completionHandler:;
+ (id)defaultManager;
@end
