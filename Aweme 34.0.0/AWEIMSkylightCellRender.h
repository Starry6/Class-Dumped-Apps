@interface AWEIMSkylightCellRender : NSObject
- (void)layoutPresenters:inCell:targetPresenter:;
- (id)p_findOrBuildViewForPresenter:inCell:;
- (void)p_insertView:toSuperView:;
- (void)p_clearDirtyViewsInCell:displayingViews:;
- (void)renderViewModel:inCell:;
@end
