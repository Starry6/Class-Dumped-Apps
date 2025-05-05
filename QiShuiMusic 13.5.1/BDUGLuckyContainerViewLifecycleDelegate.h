@interface BDUGLuckyContainerViewLifecycleDelegate : NSObject
@property (nonatomic) NSHashTable views;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)__addLoadingViewIfNeededWithContainer:context:;
- (void)__appDidBecomeActive:;
- (BOOL)__appIsInBackground;
- (void)__appWillResignActive:;
- (id)__buildLoadingViewWithContext:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerViewDidAppear:;
- (void)containerViewDidDisappear:;
- (void)containerViewShouldStartLoad:enableLoadingView:enableLoadFailedView:;
- (id)views;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setViews:;
+ (id)sharedInstance;
@end
