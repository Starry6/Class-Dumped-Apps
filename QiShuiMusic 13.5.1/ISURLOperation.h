@interface ISURLOperation : ISOperation
@property (nonatomic) NSNumber _accountDSIDOverride;
@property (nonatomic) NSURLRequest _activeURLRequest;
@property (nonatomic) BOOL _loadsHTTPFailures;
@property (nonatomic) BOOL _usesPrivateCookieStore;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) SSHTTPArchive HTTPArchive;
@property (nonatomic) ISURLRequestPerformance performanceMetrics;
@property (nonatomic) BOOL _shouldSetCookies;
@property (nonatomic) BOOL tracksPerformanceMetrics;
@property (nonatomic) BOOL uploadProgressRequested;
@property (nonatomic) NSURLRequest activeURLRequest;
@property (nonatomic) <ISURLOperationDelegate> delegate;
@property (nonatomic) ISDataProvider dataProvider;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) NSString logKey;
@property (nonatomic) NSArray passThroughErrors;
@property (nonatomic) SSURLRequestProperties requestProperties;
@property (nonatomic) NSNumber metricsLoadURLSessionDuration;
@property (nonatomic) NSNumber metricsLoadURLSamplingPercentage;
@property (nonatomic) NSNumber metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic) SSBag bag;
@property (nonatomic) BOOL isURLBagRequest;
@property (nonatomic) NSData rawResponseData;
@property (nonatomic) BOOL shouldDisableCellular;
@property (nonatomic) BOOL shouldRequireCellular;
@property (nonatomic) BOOL shouldSetCookies;
@property (nonatomic) NSData sourceAppAuditTokenData;
@property (nonatomic) NSString sourceAppBundleID;
@property (nonatomic) NSURLCache URLCache;
@property (nonatomic) NSString URLCacheID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:task:didCompleteWithEvent:error:;
- (id)_stringForCachePolicy:;
- (void)URLSession:dataTask:didReceiveData:;
- (BOOL)_usesPrivateCookieStore;
- (id)_handleRedirectRequest:response:;
- (BOOL)shouldRequireCellular;
- (void)URLSession:task:didFinishCreatingHTTPArchive:;
- (id)URLCacheID;
- (id)_activeURL;
- (id)sourceAppBundleID;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)_sanitizedStringForString:;
- (id)init;
- (BOOL)_shouldSetCookies;
- (BOOL)_isPassThroughStatus:;
- (void)_run;
- (id)_errorWithDomain:code:;
- (id)HTTPArchive;
- (void)URLSession:task:needNewBodyStream:;
- (void)_setShouldSetCookies:;
- (id)_activeURLRequest;
- (id)_accountDSIDOverride;
- (void)dealloc;
- (id)dataProvider;
- (id)_copyAuthenticationContext;
- (id)_decodedDataForData:;
- (void)_performDefaultHandlingForAuthenticationChallenge:;
- (BOOL)_runRequestWithURL:dataConnectionServiceType:;
- (void)_willSendRequest:;
- (id)authenticationContext;
- (void)_sendContentLengthToDelegate:;
- (id)_sanitizedDescriptionForObject:;
- (void)_handleReceivedResponse:;
- (id)passThroughErrors;
- (id)URLCache;
- (id)metricsLoadURLSessionDuration;
- (void)setLogKey:;
- (BOOL)shouldSetCookies;
- (BOOL)handleRedirectFromDataProvider:error:;
- (id)metricsLoadURLSamplingPercentageCachedResponses;
- (id)newRequestWithURL:;
- (id)requestProperties;
- (void)_setLoadsHTTPFailures:;
- (BOOL)isUploadProgressRequested;
- (void)_sendResponseToDelegate:;
- (void)setRequestProperties:;
- (void)_handleFinishedLoading;
- (id)_accountIdentifier;
- (id)_requestProperties;
- (BOOL)shouldDisableCellular;
- (id)initWithSessionManager:;
- (void)_sendOutputToDelegate:;
- (void)_retry;
- (id)URLSession:task:decodedDataForResponseData:;
- (BOOL)_shouldFollowRedirectWithRequest:error:;
- (void)_setAccountDSIDOverride:;
- (void)_stopIfCancelled;
- (BOOL)_validateContentLength:error:;
- (id)sourceAppAuditTokenData;
- (id)activeURLRequest;
- (id)_copyQueryStringDictionaryForRedirect:;
- (id)rawResponseData;
- (void)_logRequest:;
- (void)_handleReceivedData:;
- (BOOL)_isExternalURL:;
- (void)_setActiveURLRequest:;
- (id)logKey;
- (BOOL)tracksPerformanceMetrics;
- (BOOL)_processResponseData:error:;
- (void)handleResponse:;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:;
- (void)_logResponseBody:;
- (void)setUploadProgressRequested:;
- (void)setAuthenticationContext:;
- (void)setDataProvider:;
- (void)_stopConnection;
- (void)_sendRequestToDelegate:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)setTracksPerformanceMetrics:;
- (BOOL)shouldFollowRedirectWithRequest:returningError:;
- (long long)_defaultAuthChallengeDispositionForChallenge:;
- (id)metricsLoadURLSamplingPercentage;
- (id)_sanitizedURLForURL:;
- (void)setPassThroughErrors:;
- (void)_setUsesPrivateCookieStore:;
- (BOOL)_loadsHTTPFailures;
- (id)_errorWithDefaultStringsForError:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (id)request;
- (void)run;
- (id)performanceMetrics;
- (id)response;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setResponse:;
- (void)_updateProgress;
+ (id)sharedCFURLCache;
+ (id)copyUserAgent;
+ (id)_sharedCacheStorageSession;
@end
