@interface AAURLProtocol : NSURLProtocol
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:cachedResponse:client:;
- (id)_normalizedRequestForURL:;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
+ (BOOL)requestIsCacheEquivalent:toRequest:;
@end
