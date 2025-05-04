@interface AWEUserWorkCellSingleRootComponent : AWERLComponent
@property (nonatomic) AWEUserWorkCellSingleLeftContainerComponent leftComponent;
@property (nonatomic) AWEUserWorkCellSingleRightContainerComponent rightComponent;
@property (nonatomic) AWERLFlexVirtualNode node;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (id)leftComponent;
- (id)rightComponent;
- (void)setLeftComponent:;
- (void)setRightComponent:;
- (id)node;
- (void).cxx_destruct;
- (void)setNode:;
@end
