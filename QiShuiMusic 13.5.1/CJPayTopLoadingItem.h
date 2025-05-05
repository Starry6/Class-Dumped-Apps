@interface CJPayTopLoadingItem : CJPayBaseLoadingItem
@property (nonatomic) CJPayBaseLoadingView loadingView;
@property (nonatomic) CJPayTimerManager timerManager;
@property (nonatomic) <CJPayLoadingManagerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startLoadingOnView:;
- (void)startLoadingWithTitle:;
- (void)startLoadingWithValidateTimer:;
- (void)startLoadingWithVc:;
- (void)startLoadingWithVc:title:;
- (void)stopLoadingWithState:;
- (void)stopLoading;
- (void)setTimerManager:;
- (id)timerManager;
- (void)startLoading;
- (void).cxx_destruct;
- (BOOL)setTimer;
- (id)loadingView;
- (void)setLoadingView:;
+ (long long)loadingType;
@end
