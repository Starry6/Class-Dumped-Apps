@interface CJPayDouyinStyleLoadingItem : CJPayTopLoadingItem
@property (nonatomic) <CJPayLoadingManagerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_preShowTimerTrigger;
- (void)p_startLoading;
- (void)p_stopLoading;
- (void)p_stoploadingWithState:;
- (void)startLoadingWithTitle:;
- (void)startLoadingWithValidateTimer:;
- (void)stopLoadingWithState:;
- (void)stopLoading;
- (void)startLoading;
+ (long long)loadingType;
@end
