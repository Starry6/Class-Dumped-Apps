@interface UIPDFPlacementController : NSObject
@property (nonatomic) UIPDFPageView pageView;
- (id)pageView;
- (void)dealloc;
- (id)viewAtIndex:;
- (void)setPageView:;
- (id)initWithAnnotations:viewSize:;
- (id)boundsForObjectAtIndex:;
- (double)yForObjectAtIndex:;
- (void)shift:;
- (void)layoutViews:;
@end
