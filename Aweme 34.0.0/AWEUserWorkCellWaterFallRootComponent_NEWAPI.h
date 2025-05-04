@interface AWEUserWorkCellWaterFallRootComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) AWEUserWorkCellBaseComponent bottomComponent;
@property (nonatomic) AWEUserWorkCellWaterFallTopContainerComponent_NEWAPI topComponent;
@property (nonatomic) AWERLVirtualFlexView virtualView;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)setVirtualView:;
- (id)topComponent;
- (id)bottomComponent;
- (void)setBottomComponent:;
- (void)setTopComponent:;
- (void).cxx_destruct;
- (id)virtualView;
@end
