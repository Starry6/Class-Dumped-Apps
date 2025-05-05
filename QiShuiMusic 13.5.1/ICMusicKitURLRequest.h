@interface ICMusicKitURLRequest : ICURLRequest
@property (nonatomic) NSString _developerToken;
@property (nonatomic) ICStoreURLRequest _pendingEquivalentStoreURLRequest;
@property (nonatomic) ICMusicKitRequestContext requestContext;
@property (nonatomic) NSDictionary additionalHTTPCookies;
- (id)_developerToken;
- (void)setAdditionalHTTPCookies:;
- (id)initWithURLRequest:requestContext:;
- (id)additionalHTTPCookies;
- (id)_description;
- (id)initWithURLRequest:requestContext:resumeData:;
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:developerToken:completionHandler:;
- (void)_setDeveloperToken:;
- (void)_buildMusicKitURLRequestWithBaseURLRequest:completionHandler:;
- (id)requestContext;
- (void).cxx_destruct;
- (id)_pendingEquivalentStoreURLRequest;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:;
- (id)description;
- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:completionHandler:;
- (void)buildURLRequestWithCompletionHandler:;
- (id)initWithURL:requestContext:;
+ (Class)_responseHandlerClass;
+ (Class)_responseClass;
+ (unsigned long long)_defaultMaxRetryCountForReason:;
@end
