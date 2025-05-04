@interface AWEUserWorkCellWaterFallRootComponent : AWERLComponent
@property (nonatomic) AWERLComponent bottomComponent;
@property (nonatomic) AWEUserWorkCellWaterFallTopContainerComponent topComponent;
@property (nonatomic) AWERLFlexVirtualNode node;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (id)topComponent;
- (id)bottomComponent;
- (void)setBottomComponent:;
- (void)setTopComponent:;
- (id)node;
- (void).cxx_destruct;
- (void)setNode:;
@end
