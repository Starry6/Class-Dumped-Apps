@interface IESECListKitStickCollectionView : UICollectionView
@property (nonatomic) double ieseclistkit_stickOffsetY;
@property (nonatomic) IESECListKitStickCollectionViewDelegateForwarder ieseclistkit_delegateForwarder;
@property (nonatomic) NSMutableArray ieseclistkit_observedViews;
@property (nonatomic) BOOL ieseclistkit_isObserving;
@property (nonatomic) BOOL ieseclistkit_lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addObservedView:;
- (void)addObserverToView:;
- (id)ieseclistkit_delegateForwarder;
- (BOOL)ieseclistkit_isObserving;
- (BOOL)ieseclistkit_lock;
- (id)ieseclistkit_observedViews;
- (void)ieseclistkit_scrollViewDidEndScrolling;
- (double)ieseclistkit_stickOffsetY;
- (void)removeObservedViews;
- (void)removeObserverFromView:;
- (void)scrollView:setContentOffset:;
- (void)setIeseclistkit_delegateForwarder:;
- (void)setIeseclistkit_isObserving:;
- (void)setIeseclistkit_lock:;
- (void)setIeseclistkit_observedViews:;
- (void)setIeseclistkit_stickOffsetY:;
- (void)scrollViewDidEndDecelerating:;
- (void)initialize;
- (void)dealloc;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)scrollViewDidScroll:;
- (id)delegate;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)_gestureRecognizerShouldBegin:;
@end
