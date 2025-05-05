@interface NSAboutURLProtocol : NSURLProtocol
- (void)stopLoading;
- (void)startLoading;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
@end
