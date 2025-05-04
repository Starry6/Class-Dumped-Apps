@interface AWEUserWorkCellMaskLayerViewComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode virtualNode;
@property (nonatomic) AWERLFlexChildVirtualNode maskLayerViewNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)virtualNodeWithChildren:;
- (id)virtualNode;
- (void)setVirtualNode:;
- (id)maskLayerViewNode;
- (void)setMaskLayerViewNode:;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
@end
