@interface AWEPOIDetailLynxContainerBuilder : DitoGeneralLynxContainerBuilder
@property (nonatomic) DitoGeneralContainerPageContext detailPageContext;
- (id)detailPageContext;
- (id)getPreloadView:;
- (id)lynxContainerWithVM:ditoNodeTag:;
- (id)lynxContainerWithCubeModel:extraParams:;
@end
