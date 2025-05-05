@interface TTPlayerViewExtraViews : NSObject
@property (nonatomic) TTPlayerAlpha3DView alpha3DView;
- (void)setAlpha3DView:;
- (id)alpha3DView;
- (void)genAlpha3DView:playerView:avWindow:;
- (id)getExtraViewForViewType:;
- (void)ttplayerViewDidCreateMetalView:playerView:avWindow:specialFunctionType:;
- (void)ttplayerViewLayoutSubviews:playerView:;
- (void)ttplayerViewWillRelease:;
- (void)setDrawableSize:;
- (void).cxx_destruct;
@end
