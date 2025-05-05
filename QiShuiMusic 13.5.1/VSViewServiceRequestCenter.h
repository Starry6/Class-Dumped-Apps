@interface VSViewServiceRequestCenter : NSObject
@property (nonatomic) NSOperationQueue requestQueue;
@property (nonatomic) NSOperationQueue completionQueue;
- (void)setCompletionQueue:;
- (id)completionQueue;
- (id)init;
- (void)setRequestQueue:;
- (id)requestQueue;
- (void).cxx_destruct;
- (id)enqueueCompletionHandlerBlock:;
- (id)enqueueRequest:withAccountManagerDelegate:operationDelegate:completionHandler:;
+ (id)sharedViewServiceRequestCenter;
@end
