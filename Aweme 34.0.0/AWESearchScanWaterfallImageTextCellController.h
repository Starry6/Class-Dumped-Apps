@interface AWESearchScanWaterfallImageTextCellController : AWESearchScanWaterfallBaseCellController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (id)logExtraDict;
- (id)searchTransitionProviderClassNameForContext:;
- (void)trackShow;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)didStartShowing;
- (void)gotoAlbumDetailPage;
- (id)getInflowExtra;
- (void)cardSingleTapped:;
- (id)getTrackBaseParams;
- (id)transitionContext;
- (id)navigationController;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:;
- (void)updateWithModel:;
+ (id)sizeWithViewModel:width:;
@end
