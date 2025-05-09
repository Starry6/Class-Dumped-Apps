@interface IESForestCDNFetcher : IESForestBaseFetcher
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double startTime;
@property (nonatomic) NSMutableArray debugMessages;
@property (nonatomic) TTHttpTask ttHttpTask;
@property (nonatomic) NSURLRequest redirectNewRequest;
@property (nonatomic) NSURLResponse redirectOldResponse;
@property (nonatomic) NSURLResponse nsURLResponse;
@property (nonatomic) NSMutableData receivedData;
@property (nonatomic) BOOL isDataReceived;
- (void)_fetchResourceWithRequest:redirectHandler:headerHandler:dataHandler:completionHandler:;
- (void)_fetchResourceWithSourceURL:retryTimes:completion:;
- (BOOL)_willCallLoadingFailedWithResponse:withError:;
- (void)appendDebugMessage:error:;
- (id)dateFromGMTString:;
- (id)dateNowIfPreload;
- (id)debugMessages;
- (id)extractExpiredDateFrom:;
- (id)extractExpiredDateFromCacheControl:responseDateString:;
- (void)fetchResourceWithRequest:completion:;
- (void)fetchResourceWithRequest:redirectHandler:headerHandler:dataHandler:completionHandler:;
- (void)fetchResourceWithURLs:completion:;
- (void)invokeCompletionHandler:response:error:;
- (BOOL)isDataReceived;
- (id)nsURLResponse;
- (void)processChunkData:dataHandler:;
- (void)processCompletion:error:completionHandler:;
- (void)processHeader:response:headerHandler:;
- (void)processRedirect:newLocation:oldResponse:redirectHandler:;
- (id)redirectNewRequest;
- (id)redirectOldResponse;
- (void)setDebugMessages:;
- (void)setIsDataReceived:;
- (void)setNsURLResponse:;
- (void)setRedirectNewRequest:;
- (void)setRedirectOldResponse:;
- (void)setTtHttpTask:;
- (id)ttHttpTask;
- (id)init;
- (void)setStartTime:;
- (double)startTime;
- (id)receivedData;
- (void).cxx_destruct;
- (void)setReceivedData:;
- (id)name;
- (id)debugMessage;
- (void)cancelFetch;
+ (id)canRetryStatusCode;
+ (id)fetcherName;
@end
