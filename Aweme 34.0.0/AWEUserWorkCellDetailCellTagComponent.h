@interface AWEUserWorkCellDetailCellTagComponent : AWERLComponent
@property (nonatomic) NSString text;
@property (nonatomic) # viewClass;
@property (nonatomic) AWERLFlexChildVirtualNode virtualNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)virtualNodeWithChildren:;
- (id)virtualNode;
- (void)setVirtualNode:;
- (Class)viewClass;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setViewClass:;
+ (id)componentWithData:context:;
@end
