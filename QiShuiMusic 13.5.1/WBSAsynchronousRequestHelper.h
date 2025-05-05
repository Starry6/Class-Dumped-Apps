@interface WBSAsynchronousRequestHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)sendRequest;
- (void)connection:didReceiveData:;
- (void).cxx_destruct;
- (void)connection:didReceiveResponse:;
- (void)connectionDidFinishLoading:;
- (void)connection:didFailWithError:;
- (id)initWithRequest:queue:completionHandler:;
@end
