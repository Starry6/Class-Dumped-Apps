@interface WKWebViewContentProviderRegistry : NSObject
- (id)_mimeTypesWithCustomContentProviders;
- (void)removePage:;
- (Class)providerForMIMEType:;
- (void)registerProvider:forMIMEType:;
- (void).cxx_destruct;
- (void)addPage:;
- (id).cxx_construct;
- (id)initWithConfiguration:;
@end
