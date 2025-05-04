@interface AWEDetailLoadingServiceImpl : NSObject
@property (nonatomic) NSMutableArray loadingContainerArray;
@property (nonatomic) AWEUILoadingView loadingView;
- (void)enqueueLoadingInContainerView:;
- (void)removeLoadingInContainerView:;
- (id)loadingContainerArray;
- (void)p_updateLoadingStatus;
- (void)setLoadingContainerArray:;
- (id)init;
- (void)dealloc;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
@end
