@interface AWEUserWorkCellSingleRootComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) AWEUserWorkCellSingleLeftContainerComponent_NEWAPI leftComponent;
@property (nonatomic) AWEUserWorkCellSingleRightContainerComponent_NEWAPI rightComponent;
@property (nonatomic) AWERLVirtualFlexView virtualView;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)setVirtualView:;
- (id)leftComponent;
- (id)rightComponent;
- (void)setLeftComponent:;
- (void)setRightComponent:;
- (void).cxx_destruct;
- (id)virtualView;
@end
