@interface HttpResourceLoader : NSObject
@property (nonatomic) HttpResourceLoadingRequest request;
@property (nonatomic) <HttpResourceloaderDelegate> delegate;
- (int)sendRequest:interruptCb:retryCount:requestTimeout:;
- (void)setDelegate:;
- (id)request;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRequest:;
@end
