@interface AMSMockNetworkProxy : NSURLProtocol
@property (nonatomic) AMSMockURLOverride currentOverride;
- (void)sendResponse:;
- (void)stopLoading;
- (void)startLoading;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)performRedirectFromResponse:;
- (void)finishWithData:;
- (id)currentOverride;
- (void)setCurrentOverride:;
+ (void)clearOverrides;
+ (id)canonicalRequestForRequest:;
+ (void)addOverride:;
+ (BOOL)canInitWithRequest:;
+ (void)_sync:;
+ (void)removeOverride:;
+ (id)_overrides;
+ (id)registeredOverrides;
+ (id)executedOverrides;
+ (id)_executedOverrides;
+ (void)_removeAllOverrides;
+ (void)_removeOverride:;
@end
