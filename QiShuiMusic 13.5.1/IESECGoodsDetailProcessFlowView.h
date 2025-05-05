@interface IESECGoodsDetailProcessFlowView : UIView
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray nodeViewList;
@property (nonatomic) NSMutableArray arrowLineImageList;
@property (nonatomic) double containerWidth;
- (id)arrowLineImageList;
- (void)configureProcessFlowViewWithElementsModel:;
- (void)createArrowImageBetweenNodes;
- (id)initWithFrame:width:;
- (void)makeNodeViewConstraints;
- (id)nodeViewList;
- (void)setArrowLineImageList:;
- (void)setNodeViewList:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setContainerWidth:;
- (double)containerWidth;
@end
