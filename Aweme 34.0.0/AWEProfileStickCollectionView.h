@interface AWEProfileStickCollectionView : UICollectionView
@property (nonatomic) AWEProfileStickCollectionViewDelegateForwarder awelistkit_delegateForwarder;
@property (nonatomic) NSMutableArray awelistkit_observedViews;
@property (nonatomic) BOOL awelistkit_isObserving;
@property (nonatomic) BOOL awelistkit_lock;
@property (nonatomic) double profileStick_stickOffsetY;
@property (nonatomic) BOOL profileStick_resetContentOffsetIfContainerScrollsToTop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObservedViews;
- (id)awelistkit_delegateForwarder;
- (void)setAwelistkit_isObserving:;
- (void)setAwelistkit_lock:;
- (id)awelistkit_observedViews;
- (void)addObserverToView:;
- (void)removeObserverFromView:;
- (BOOL)awelistkit_isObserving;
- (void)scrollView:setContentOffset:;
- (BOOL)awelistkit_lock;
- (void)addObservedView:;
- (void)awelistkit_scrollViewDidEndScrolling;
- (void)setAwelistkit_delegateForwarder:;
- (void)setAwelistkit_observedViews:;
- (void)setProfileStick_resetContentOffsetIfContainerScrollsToTop:;
- (void)setProfileStick_stickOffsetY:;
- (BOOL)profileStick_resetContentOffsetIfContainerScrollsToTop;
- (double)profileStick_stickOffsetY;
- (id)initWithFrame:collectionViewLayout:;
- (void)initialize;
- (void)dealloc;
- (id)delegate;
- (void)scrollViewDidScroll:;
- (BOOL)_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)scrollViewDidEndDecelerating:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)setDelegate:;
- (BOOL)_gestureRecognizerShouldBegin:;
@end
