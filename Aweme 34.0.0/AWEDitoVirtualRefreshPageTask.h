@interface AWEDitoVirtualRefreshPageTask : NSObject
@property (nonatomic) DitoPageContext pageContext;
@property (nonatomic) NSString pageUrl;
@property (nonatomic) BOOL refreshPageWhenTimeOut;
@property (nonatomic) double timeOutDuration;
@property (nonatomic) BOOL showLoadingView;
@property (nonatomic) @? callback;
@property (nonatomic) BOOL timeOut;
@property (nonatomic) q resultFrom;
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) double initialStartTime;
@property (nonatomic) double initialEndTime;
@property (nonatomic) double loadStartTime;
@property (nonatomic) double loadEndTime;
@property (nonatomic) double replaceStartTime;
@property (nonatomic) double replaceEndTime;
- (id)targetVC;
- (void)setTargetVC:;
- (long long)resultFrom;
- (void)setResultFrom:;
- (void)setTimeOutDuration:;
- (double)timeOutDuration;
- (double)loadStartTime;
- (void)setLoadStartTime:;
- (id)initWithPageContext:;
- (void)runWithPageUrl:refreshPageWhenTimeOut:timeOutDuration:showLoadingView:callback:;
- (void)setInitialStartTime:;
- (void)pageDidLoadCompleteAction:;
- (void)pageDidLoadFailureAction:;
- (void)setRefreshPageWhenTimeOut:;
- (void)setShowLoadingView:;
- (void)setInitialEndTime:;
- (void)invokeCallbackWithCode:msg:;
- (void)setLoadEndTime:;
- (BOOL)refreshPageWhenTimeOut;
- (void)setReplaceStartTime:;
- (void)pushTargetPageToNavigationStack;
- (void)setReplaceEndTime:;
- (double)initialEndTime;
- (double)initialStartTime;
- (double)loadEndTime;
- (double)replaceEndTime;
- (double)replaceStartTime;
- (void)setCallback:;
- (id)callback;
- (void)dealloc;
- (id)pageUrl;
- (id)metricsData;
- (void)cancel;
- (void).cxx_destruct;
- (void)setPageUrl:;
- (BOOL)showLoadingView;
- (void)setPageContext:;
- (id)pageContext;
- (BOOL)timeOut;
- (void)setTimeOut:;
@end
