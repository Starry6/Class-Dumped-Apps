@interface WKScrollingNodeScrollViewDelegate : NSObject
@property (nonatomic) BOOL inUserInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidEndDecelerating:;
- (void)cancelPointersForGestureRecognizer:;
- (id)_scrollView:adjustedOffsetForOffset:translation:startPoint:locationInView:horizontalVelocity:verticalVelocity:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewWillBeginZooming:withView:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)_actingParentScrollViewForScrollView:;
- (void)_scrollView:asynchronouslyHandleScrollEvent:completion:;
- (id)initWithScrollingTreeNodeDelegate:;
- (BOOL)_isInUserInteraction;
- (void)setInUserInteraction:;
@end
