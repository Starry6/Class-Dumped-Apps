@interface QLPreviewURLProtocol : NSURLProtocol
- (void)stopLoading;
- (void)startLoading;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
+ (BOOL)requestIsCacheEquivalent:toRequest:;
+ (void)setError:forURL:;
+ (void)unregisterURLs:andPreviewURL:;
+ (id)newUniqueURLWithName:;
+ (void)cancelLoadingProtocol:;
+ (void)registerPreview:forPreviewURL:;
+ (void)stopLoadingProtocol:;
+ (id)protocolScheme;
+ (void)registerURL:mimeType:textEncoding:;
+ (void)appendData:forURL:lastChunk:;
+ (id)mimeTypeForAttachmentURL:;
+ (BOOL)isSafeURL:;
+ (BOOL)isSafeRequest:;
+ (id)newURLWithContentID:baseURL:;
+ (id)_errorForAbort;
+ (id)_errorForCancel;
+ (void)_unregisterURL:;
+ (id)errorForURL:;
+ (void)startLoadingProtocol:;
+ (void)stopLoadingProtocol:isCancel:;
+ (void)_dumpPendingProtocols;
@end
