@interface BDWebURLSchemeTask : NSObject
@property (nonatomic) <BDWebURLSchemeTaskDelegate> delegate;
@property (nonatomic) BOOL bdw_shouldUseNetReuse;
@property (nonatomic) WKWebView bdw_webView;
@property (nonatomic) NSURLRequest bdw_request;
@property (nonatomic) NSDictionary bdw_additionalInfo;
@property (nonatomic) NSMutableDictionary bdw_rlProcessInfoRecord;
@property (nonatomic) NSDictionary bdw_ttnetResponseTimingInfoRecord;
@property (nonatomic) @? bdw_dataProcessor;
@property (nonatomic) @? bdw_responseProcessor;
@property (nonatomic) <BDWebURLSchemeTaskLifeCycleProtocol> bdw_lifecycleDelegate;
@property (nonatomic) BOOL taskHasFinishOrFail;
@property (nonatomic) BOOL canHandle;
@property (nonatomic) BOOL taskFinishWithTTNet;
@property (nonatomic) BOOL taskFinishWithLocalData;
@property (nonatomic) BOOL useTTNetCommonParams;
@property (nonatomic) BOOL ttnetEnableCustomizedCookie;
@property (nonatomic) BOOL willRecordForMainFrameModel;
@property (nonatomic) NSInteger taskHttpCachePolicy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBdw_webView:;
- (void)setBdw_request:;
- (void)setTtnetEnableCustomizedCookie:;
- (void)setWillRecordForMainFrameModel:;
- (id)bdw_additionalInfo;
- (id)bdw_dataProcessor;
- (void)bdw_didFailWithError:;
- (void)bdw_didFinishLoading;
- (void)bdw_didLoadData:;
- (void)bdw_didPerformRedirection:newRequest:;
- (void)bdw_didReceiveResponse:;
- (id)bdw_lifecycleDelegate;
- (id)bdw_request;
- (id)bdw_responseProcessor;
- (id)bdw_rlProcessInfoRecord;
- (BOOL)bdw_shouldUseNetReuse;
- (id)bdw_ttnetResponseTimingInfoRecord;
- (id)bdw_webView;
- (BOOL)canHandle;
- (void)setBdw_additionalInfo:;
- (void)setBdw_dataProcessor:;
- (void)setBdw_lifecycleDelegate:;
- (void)setBdw_responseProcessor:;
- (void)setBdw_rlProcessInfoRecord:;
- (void)setBdw_shouldUseNetReuse:;
- (void)setBdw_ttnetResponseTimingInfoRecord:;
- (void)setCanHandle:;
- (void)setTaskFinishWithLocalData:;
- (void)setTaskFinishWithTTNet:;
- (void)setTaskHasFinishOrFail:;
- (void)setTaskHttpCachePolicy:;
- (void)setUseTTNetCommonParams:;
- (BOOL)taskFinishWithLocalData;
- (BOOL)taskFinishWithTTNet;
- (BOOL)taskHasFinishOrFail;
- (int)taskHttpCachePolicy;
- (BOOL)ttnetEnableCustomizedCookie;
- (BOOL)useTTNetCommonParams;
- (BOOL)willRecordForMainFrameModel;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
