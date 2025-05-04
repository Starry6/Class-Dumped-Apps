@interface AWEPayNFCRedirectHandler : NSObject
@property (nonatomic) AWEPayNFCRedirectErrorPage errorPage;
@property (nonatomic) CJPayHTTPTask lastHttpTask;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) CJPayNFCConfig nfcSettings;
- (BOOL)isColdLaunch;
- (void)setIsColdLaunch:;
- (id)nfcSettings;
- (BOOL)handleRedirectBusiness:showLoading:isColdLaunch:;
- (void)setNfcSettings:;
- (id)lastHttpTask;
- (void)setLastHttpTask:;
- (void)handleError:session:;
- (void)handleNeedLogin:;
- (void)handleJumpTargetUrlWithModel:session:;
- (void)removeErrorPageIfNeed;
- (void)removeLoadingAndErrorPageIfNeed;
- (BOOL)handleRedirectBusiness:showLoading:;
- (id)errorPage;
- (void)setErrorPage:;
- (void)startLoading;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedInstance;
@end
