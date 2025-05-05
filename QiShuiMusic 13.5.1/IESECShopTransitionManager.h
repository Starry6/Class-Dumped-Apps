@interface IESECShopTransitionManager : NSObject
@property (nonatomic) UIView transitionView;
@property (nonatomic) UIView rootView;
@property (nonatomic) @? frameUpdater;
@property (nonatomic) @? fromAlphaUpdater;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)calculateConvertedFrame:;
- (id)frameUpdater;
- (id)fromAlphaUpdater;
- (void)notifyFromViewProvider:;
- (void)notifyToViewProvider:;
- (void)prepareViewProvider:;
- (void)restoreViewProvider:;
- (void)setFrameUpdater:;
- (void)setFromAlphaUpdater:;
- (void)transferTransitionView:;
- (void)updateTransition:;
- (void).cxx_destruct;
- (void)startTransition;
- (void)finishTransition;
- (id)transitionView;
- (id)rootView;
- (void)setRootView:;
- (void)setTransitionView:;
@end
