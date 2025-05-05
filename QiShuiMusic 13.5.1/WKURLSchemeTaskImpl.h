@interface WKURLSchemeTaskImpl : NSObject
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL _requestOnlyIfCached;
@property (nonatomic) WKFrameInfo _frame;
@property (nonatomic) NSURLRequest request;
- (void)didReceiveResponse:;
- (id)init;
- (void)dealloc;
- (id)_apiObject;
- (id)request;
- (void)didReceiveData:;
- (void)didFailWithError:;
- (id)_frame;
- (void)didFinish;
- (void)_willPerformRedirection:newRequest:completionHandler:;
- (void)_didPerformRedirection:newRequest:;
- (BOOL)_requestOnlyIfCached;
@end
