@interface TTNetResourceLoaderDelegate : NSObject
@property (nonatomic) TTHttpTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:requestTimeout:;
- (id)init;
- (void)dealloc;
- (id)task;
- (void)setTask:;
- (void).cxx_destruct;
- (void)resourceLoader:didCancelLoadingRequest:;
@end
