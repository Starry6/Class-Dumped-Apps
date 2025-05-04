@interface AWEAdPromptWebViewController : AWEAdSpecialWebViewController
@property (nonatomic) NSError loadError;
@property (nonatomic) NSString requestURL;
@property (nonatomic) double loadDuration;
@property (nonatomic) @? didFailToLoadHandler;
@property (nonatomic) @? didFinishLoadHandler;
@property (nonatomic) NSDictionary liveRoomInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needChangeBar;
- (void)invokeJSWithEvent:params:;
- (void)updateWebViewConfig;
- (void)notifyDialogPopUpEvent;
- (void)notifyFeedCardStartUnfoldEvent;
- (void)notifyOnLeaveConvertPage:;
- (void)setupScrollViewContentOffsetZeroIfNeed;
- (void)setupClearBackgroundColor;
- (void)notifyFEWhenScreenOrientationChange:;
- (void)cancelLoading;
- (void)reload;
- (id)contentView;
- (void).cxx_destruct;
- (id)loadError;
- (void)reset;
- (void)webView:didFailLoadWithError:;
- (void)setLoadError:;
@end
