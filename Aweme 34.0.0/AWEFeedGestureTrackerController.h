@interface AWEFeedGestureTrackerController : AWEBaseController
@property (nonatomic) BOOL isDragFromInteractionContainer;
@property (nonatomic) {CGPoint=dd} slideActionBeginDraggingPoint;
@property (nonatomic) {CGPoint=dd} slideActionEndDraggingPoint;
@property (nonatomic) double xSlideBeginPointPercent;
@property (nonatomic) double ySlideBeginPointPercent;
@property (nonatomic) AWEAwemeModel slideActionBeginDraggingAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSlideActionBeginDraggingAweme:;
- (void)setSlideActionBeginDraggingPoint:;
- (id)slideActionBeginDraggingPoint;
- (void)setIsDragFromInteractionContainer:;
- (BOOL)isDragFromInteractionContainer;
- (void)setXSlideBeginPointPercent:;
- (void)setYSlideBeginPointPercent:;
- (void)setSlideActionEndDraggingPoint:;
- (id)slideActionEndDraggingPoint;
- (id)slideActionBeginDraggingAweme;
- (double)xSlideBeginPointPercent;
- (double)ySlideBeginPointPercent;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
