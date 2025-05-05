@interface IESForestWebURLProtocol : NSURLProtocol
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startLoadingWithWebView:;
- (void)stopLoading;
- (void)startLoading;
+ (BOOL)canInitWithSchemeTask:;
+ (id)canonicalRequestForRequest:;
+ (BOOL)canInitWithRequest:;
+ (id)sharedCache;
@end
