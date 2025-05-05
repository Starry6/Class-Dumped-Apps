@interface CJPayDouyinLoadingItem : CJPayTopLoadingItem
@property (nonatomic) NSString logoUrl;
- (id)logoUrl;
- (id)loadingIcon;
- (void)p_startDouyinLoading:logo:onView:;
- (void)p_startDouyinLoading:onView:;
- (void)p_startDouyinLoadingWithView:onView:;
- (void)p_stopDouyinLoading;
- (void)setLogoUrl:;
- (void)startLoadingOnView:;
- (void)startLoadingWithTitle:;
- (void)startLoadingWithTitle:logo:;
- (void)startLoadingWithVc:;
- (void)startLoadingWithVc:title:;
- (void)startLoadingWithView:;
- (void)stopLoading;
- (void)startLoading;
- (void).cxx_destruct;
- (id)loadingTitle;
+ (long long)loadingType;
@end
