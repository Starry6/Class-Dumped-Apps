@interface BDWebViewFalconMonitorInternel : NSObject
@property (nonatomic) NSMutableDictionary falconDict;
@property (nonatomic) q maxCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didGetMetaData:forRequest:isGetMethod:isCustomInterceptor:;
- (id)falconDict;
- (void)getFalconInfo:forURLString:pathExtension:isGetmethod:isCustomInterceptor:;
- (id)getInformationFromKey:index:;
- (BOOL)isClassTurnOnFalconMonitor:;
- (BOOL)isDupricate:requestUrlString:;
- (BOOL)isTurnOnFalconMonitor:;
- (void)reportDataBeforeLeave:;
- (void)reportFalconDataWithWebView:urlString:;
- (void)setFalconDict:;
- (void)webView:loadRequest:metaData:isCustomInterceptor:;
- (long long)maxCount;
- (void)webView:didFinishNavigation:;
- (void)setMaxCount:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
