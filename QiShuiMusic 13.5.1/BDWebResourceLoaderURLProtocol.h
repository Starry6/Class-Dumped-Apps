@interface BDWebResourceLoaderURLProtocol : NSURLProtocol
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopLoading;
- (void)startLoading;
+ (BOOL)canInitWithSchemeTask:;
+ (id)canonicalRequestForRequest:;
+ (id)sharedCache;
@end
