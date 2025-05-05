@interface PHAsynchronousPhotoLibraryExecutionContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dispatchOnQueue:block:;
- (void)sendChangesRequest:onClient:reply:;
- (void)callTransactionCompletionHandler:withSuccess:error:;
+ (id)asynchronousExecutionContext;
@end
