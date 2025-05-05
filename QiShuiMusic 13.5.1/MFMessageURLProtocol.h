@interface MFMessageURLProtocol : NSURLProtocol
@property (nonatomic) <EFCancelable> cancelable;
@property (nonatomic) EFPromise promise;
@property (nonatomic) EMContentRepresentation contentRepresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopLoading;
- (void)dealloc;
- (void)startLoading;
- (void)setCancelable:;
- (id)cancelable;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
- (id)initWithRequest:cachedResponse:client:;
- (id)_cachedResponseWithData:mimeType:error:;
- (id)contentRepresentation;
- (void)setContentRepresentation:;
+ (id)canonicalRequestForRequest:;
+ (id)log;
+ (BOOL)canInitWithRequest:;
+ (id)registry;
+ (BOOL)requestIsCacheEquivalent:toRequest:;
+ (void)registerContentRepresentation:;
+ (id)contentRepresentationForURL:;
+ (void)setRegistry:;
@end
