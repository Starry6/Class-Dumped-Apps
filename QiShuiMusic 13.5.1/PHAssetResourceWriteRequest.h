@interface PHAssetResourceWriteRequest : NSObject
@property (nonatomic) NSURL destinationFileURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) PHAssetResource assetResource;
@property (nonatomic) PHAssetResourceRequestOptions options;
@property (nonatomic) NSInteger requestID;
@property (nonatomic) Q managerID;
@property (nonatomic) <PHAssetResourceRequestDelegate> delegate;
@property (nonatomic) NSDictionary info;
@property (nonatomic) @? completionHandler;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSString taskIdentifier;
- (id)taskIdentifier;
- (void)cancel;
- (BOOL)isCancelled;
- (void)startRequest;
- (id)options;
- (id)delegate;
- (int)requestID;
- (void).cxx_destruct;
- (id)info;
- (id)completionHandler;
- (void)setTaskIdentifier:;
- (void)setErrorIfNone:;
- (unsigned long long)managerID;
- (void)assetResourceRequest:didFinishWithError:;
- (id)assetResource;
- (id)initWithAssetResource:destinationFileURL:options:requestID:managerID:delegate:completionHandler:;
- (void)_handleDidFindFileURL:;
- (id)destinationFileURL;
@end
