@interface AWEUserWorkCellSingleRightContainerComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode titleLabelNode;
@property (nonatomic) AWERLVirtualNode bottomNode;
@property (nonatomic) AWERLFlexVirtualNode containerNode;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (id)containerNode;
- (void)setContainerNode:;
- (id)buildIconImage;
- (id)titleLabelNode;
- (id)bottomNode;
- (void)configBottomView:;
- (void)setTitleLabelNode:;
- (void)setBottomNode:;
- (void).cxx_destruct;
@end
