@interface CJPayDouyinOpenDeskLoadingItem : CJPayTopLoadingItem
- (void)p_startLoadingOnView:;
- (void)p_stopDouyinLoading;
- (void)startLoadingOnView:;
- (void)startLoadingWithVc:;
- (void)stopLoading;
- (void)startLoading;
+ (long long)loadingType;
@end
