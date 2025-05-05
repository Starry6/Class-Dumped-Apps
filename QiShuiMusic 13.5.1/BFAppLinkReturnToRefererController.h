@interface BFAppLinkReturnToRefererController : NSObject
@property (nonatomic) <BFAppLinkReturnToRefererControllerDelegate> delegate;
@property (nonatomic) BFAppLinkReturnToRefererView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeViewAnimated:;
- (void)closeViewAnimated:explicitlyClosed:;
- (id)initForDisplayAboveNavController:;
- (void)moveNavigationBar;
- (void)openRefererAppLink:;
- (void)removeFromNavController;
- (void)returnToRefererViewDidTapInsideCloseButton:;
- (void)returnToRefererViewDidTapInsideLink:link:;
- (void)showViewForRefererAppLink:;
- (void)showViewForRefererURL:;
- (void)statusBarFrameWillChange:;
- (void)updateNavigationBarY:;
- (id)init;
- (void)dealloc;
- (void)orientationDidChange:;
- (void)setDelegate:;
- (id)view;
- (id)delegate;
- (void).cxx_destruct;
- (void)setView:;
- (void)statusBarFrameDidChange:;
@end
