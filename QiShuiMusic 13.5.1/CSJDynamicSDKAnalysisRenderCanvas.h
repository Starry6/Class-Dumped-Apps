@interface CSJDynamicSDKAnalysisRenderCanvas : NSObject
@property (nonatomic) CSJDynamicSDKAnalysisRuler ruler;
@property (nonatomic) CSJDynamicLayoutUnitModel data;
@property (nonatomic) CSJDynamicSDKAnalysisRenderArea rootArea;
@property (nonatomic) CSJDynamicSDKAnalysisViewRect viewRect;
- (id)getTabularAreas;
- (void)repaint:origin:;
- (id)createArea:y:width:height:treeId:remainWidth:brick:;
- (BOOL)isCurrentVisualBrick:;
- (BOOL)isVisualArea:;
- (id)repaintArea:parentGroupId:;
- (id)repairAbsoluteAreaXY:values:areaSize:;
- (id)repairFixedAreaXY:canvasSize:areaSize:;
- (id)rootArea;
- (id)ruler;
- (void)setRootArea:;
- (void)setRuler:;
- (void)setViewRect:;
- (id)viewRect;
- (id)init;
- (id)data;
- (void)updateResult;
- (void).cxx_destruct;
- (void)setData:;
@end
