@interface AWEBaseDetailContainerViewModel : AWEBaseListViewModel
@property (nonatomic) BOOL showLoading;
@property (nonatomic) NSError networkError;
- (void)setShowLoading:;
- (id)networkError;
- (void)setNetworkError:;
- (void).cxx_destruct;
- (BOOL)showLoading;
@end
