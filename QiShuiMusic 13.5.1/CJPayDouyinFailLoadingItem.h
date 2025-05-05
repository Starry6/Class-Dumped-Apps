@interface CJPayDouyinFailLoadingItem : CJPayTopLoadingItem
- (id)loadingIcon;
- (void)p_startLoadingWithTitle:;
- (void)p_stopDouyinLoading;
- (void)startLoadingWithTitle:;
- (void)stopLoading;
- (void)startLoading;
- (id)loadingTitle;
+ (long long)loadingType;
@end
