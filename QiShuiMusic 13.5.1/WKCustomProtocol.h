@interface WKCustomProtocol : NSURLProtocol
@property (nonatomic) {ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>=Q} customProtocolID;
@property (nonatomic) ^{__CFRunLoop=} initializationRunLoop;
- (void)stopLoading;
- (void)startLoading;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRequest:cachedResponse:client:;
- (id)initializationRunLoop;
- (id)customProtocolID;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
+ (BOOL)requestIsCacheEquivalent:toRequest:;
@end
