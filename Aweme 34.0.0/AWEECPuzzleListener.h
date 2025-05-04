@interface AWEECPuzzleListener : NSObject
@property (nonatomic) BOOL isHybridPageInModalView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)kitView:willCreatedWithContext:;
- (void)kitView:didCreatedWithContext:;
- (void)kitViewDidStartLoading:;
- (void)kitViewDidFirstScreen:;
- (void)kitView:didFinishLoadWithURL:;
- (void)kitView:didHitCacheWithContext:cacheType:;
- (void)routerDidBeginTransferWithURLString:;
- (BOOL)isHybridPageInModalView;
- (void)setIsHybridPageInModalView:;
- (void)triggerNativePrefetchIfNeeded:;
- (BOOL)enableMarketingInPuzzle:;
- (void)updateGlobalPropsWithKitView:context:;
+ (void)loadSwizzled;
+ (BOOL)isEcomHybridPageInModalView;
+ (id)findViewWithName:inLynxView:;
+ (id)sharedListener;
+ (id)findScrollViewInView:;
@end
