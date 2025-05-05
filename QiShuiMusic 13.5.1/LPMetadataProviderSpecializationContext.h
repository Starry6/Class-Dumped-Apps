@interface LPMetadataProviderSpecializationContext : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) BOOL hasLoadedResource;
@property (nonatomic) BOOL shouldFetchSubresources;
@property (nonatomic) WKWebView webView;
@property (nonatomic) Q allowedSpecializations;
@property (nonatomic) LPEvent event;
@property (nonatomic) @? eventGenerator;
- (void)setEvent:;
- (id)event;
- (id)webView;
- (void).cxx_destruct;
- (id)URL;
- (id)MIMEType;
- (BOOL)shouldFetchSubresources;
- (id)initWithURL:MIMEType:webView:hasLoadedResource:shouldFetchSubresources:allowedSpecializations:;
- (void)ensureEventWithSpecialization:;
- (BOOL)hasLoadedResource;
- (unsigned long long)allowedSpecializations;
- (id)eventGenerator;
- (void)setEventGenerator:;
@end
