@interface AWEPOIDetailGoodsAutoModalExtension : AWEPOIBaseExtension
@property (nonatomic) BOOL showGrouponModelView;
@property (nonatomic) BOOL hasShowGroupon;
@property (nonatomic) BOOL hasViewDidAppear;
@property (nonatomic) BOOL hasDidLoadPageModel;
- (void)configWithRouterParamDict:;
- (id)poiDetail;
- (BOOL)hasViewDidAppear;
- (void)setHasViewDidAppear:;
- (void)didLoadPageModel:;
- (id)constData;
- (BOOL)showGrouponAfterPOIDidAppear;
- (id)generalContext;
- (void)setShowGrouponModelView:;
- (BOOL)showGrouponModelView;
- (BOOL)canOpenGoodsDetailStraightAway;
- (void)setHasShowGroupon:;
- (void)openGrouponModalView;
- (void)setHasDidLoadPageModel:;
- (BOOL)hasShowGroupon;
- (BOOL)hasDidLoadPageModel;
- (void)viewDidAppear;
@end
