@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (id)data;
- (void)enqueueRequest:;
- (void).cxx_destruct;
- (id)initWithParent:;
- (id).cxx_construct;
- (void)resourceLoader:didCancelLoadingRequest:;
- (void)setExpectedContentSize:;
- (void)updateData:complete:;
- (BOOL)canFulfillRequest:;
- (void)fulfillPendingRequests;
- (void)fulfillRequest:;
@end
