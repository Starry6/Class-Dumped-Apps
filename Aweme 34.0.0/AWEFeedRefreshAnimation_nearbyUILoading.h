@interface AWEFeedRefreshAnimation_nearbyUILoading : UIView
@property (nonatomic) UIViewController controller;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dragWithProgress:;
- (void)dragCancellation;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:refreshBlock:;
- (void)adjustFrame;
- (void)setController:;
- (BOOL)isRefreshing;
- (void)stopRefreshing;
- (void)setLoadingView:;
- (void)beginRefreshing;
- (id)loadingView;
- (void).cxx_destruct;
- (id)initWithController:;
- (id)controller;
- (void)setIsRefreshing:;
+ (id)animationWithController:;
@end
