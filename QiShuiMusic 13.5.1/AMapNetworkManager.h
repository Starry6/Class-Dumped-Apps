@interface AMapNetworkManager : NSObject
@property (nonatomic) NSOperationQueue operationQueue;
- (id)startOperationWithRequestReformer:completionBlock:;
- (void)cancelAllOperations;
- (id)init;
- (void)dealloc;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)startOperation:;
+ (id)sendSynchronousRequestWithReformer:returningResponse:error:;
+ (id)defaultManager;
@end
