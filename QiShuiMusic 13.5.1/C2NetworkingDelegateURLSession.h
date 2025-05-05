@interface C2NetworkingDelegateURLSession : NSObject
@property (nonatomic) <NSURLSessionDelegate><C2RequestDelegate> sessionDelegate;
@property (nonatomic) NSOperationQueue delegateQueue;
@property (nonatomic) NSURLSessionConfiguration configuration;
@property (nonatomic) NSObject<C2NetworkingDelegate> networkingDelegate;
@property (nonatomic) NSString sessionDescription;
- (void)_useTLSSessionCacheFromSession:;
- (void)invalidateAndCancel;
- (void)setSessionDescription:;
- (id)sessionDelegate;
- (void)setConfiguration:;
- (id)delegateQueue;
- (void)setSessionDelegate:;
- (void)setNetworkingDelegate:;
- (id)networkingDelegate;
- (id)configuration;
- (void).cxx_destruct;
- (id)dataTaskWithRequest:;
- (void)setDelegateQueue:;
- (id)sessionDescription;
+ (id)sessionWithConfiguration:delegate:delegateQueue:;
@end
