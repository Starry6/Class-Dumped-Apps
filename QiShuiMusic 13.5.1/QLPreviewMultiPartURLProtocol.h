@interface QLPreviewMultiPartURLProtocol : NSURLProtocol
- (void)stopLoading;
- (void)startLoading;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
+ (id)protocolScheme;
@end
