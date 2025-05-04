@interface AWEUserWorkCellEncouragePublishComponent : AWERLComponent
@property (nonatomic) NSString text;
@property (nonatomic) # viewClass;
@property (nonatomic) AWERLFlexChildVirtualNode virtualNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)virtualNodeWithChildren:;
- (id)virtualNode;
- (void)setVirtualNode:;
- (void)needHideEncourageTagWithModel:;
- (BOOL)dynamicComponent;
- (Class)viewClass;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (void)setViewClass:;
+ (BOOL)canShow:;
+ (id)componentWithData:context:;
@end
