@interface CPLProxySession : CPLPlatformObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)proxyWithErrorHandler:;
- (id)proxyLibraryManager;
- (void)dispatchBlockWhenLibraryIsOpen:;
- (void)finalizeWithCompletionHandler:;
- (void)beginSessionWithKnownLibraryVersion:context:completionHandler:;
- (void)tearDownWithCompletionHandler:;
+ (void)beginSessionForProxy:knownVersion:context:completionHandler:;
@end
