@interface SNResultsXPCSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (void)request:didProduceResult:;
- (void)requestDidComplete:;
- (void)xpcRequest:didProduceResult:completionHandler:;
- (void)xpcRequest:didFailWithError:completionHandler:;
- (void)xpcRequestDidComplete:completionHandler:;
@end
