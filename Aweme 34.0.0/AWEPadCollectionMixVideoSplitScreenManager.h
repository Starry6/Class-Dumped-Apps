@interface AWEPadCollectionMixVideoSplitScreenManager : AWEPadSplitScreenBaseManager
- (id)aAWEPadMixVideoRotateAdapter;
- (BOOL)needShowFullRightVCWhenEnterPortrait;
- (long long)showActionType;
- (BOOL)needDismissWhenEnterPortrait;
- (void)adjustRightContainerViewHierarchy;
- (BOOL)needCreateNewBussinessVC;
- (void)didUpdateLeftContainerViewOffsetX:;
- (BOOL)canLeftContainerScroll;
- (BOOL)needDismissWhenUpDownSlide;
- (BOOL)needUpdateOffsetXWhenScrollWithDirection:;
- (BOOL)canLeftContainerTapAction;
- (BOOL)canRightContainerScroll;
- (BOOL)customPanGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)willDismissSplitScreenByPanGesture:;
- (void)willEnterSplitScreen;
- (void)didQuitSplitScreenToFullRight:;
- (BOOL)needDismissWhenDisappear;
- (void)postSplitStatusChanged;
+ (Class)aAWEPadMixVideoRotateAdapterClass;
@end
