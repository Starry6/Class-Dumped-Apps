@interface QLPreviewConverterURLProtocol : QLPreviewURLProtocol
+ (void)registerPreview:;
+ (id)_errorForNoPreview;
+ (void)unregisterURLs:andPreview:;
+ (void)stopLoadingProtocol:;
+ (id)protocolScheme;
@end
