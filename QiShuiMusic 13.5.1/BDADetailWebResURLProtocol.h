@interface BDADetailWebResURLProtocol : NSURLProtocol
- (void)setloadStatus:;
- (void)stopLoading;
- (void)startLoading;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
@end
