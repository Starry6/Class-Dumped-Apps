@interface AWEFeedRefreshAnimation_newUILoading : UIView
@property (nonatomic) UIViewController controller;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dragWithProgress:;
- (void)dragCancellation;
- (id)aAWEPadModuleAdapter;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:refreshBlock:;
- (void)adjustFrame;
- (void)dragXTabWithProgress:;
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
+ (Class)aAWEPadModuleAdapterClass;
+ (id)animationWithController:;
@end
