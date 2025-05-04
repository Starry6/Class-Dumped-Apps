@interface AWEUserWorkCellProhibitedContentViewComponent : AWERLComponent
@property (nonatomic) AWERLFlexChildVirtualNode prohibitedContentViewNode;
@property (nonatomic) AWEProhibitedContentDouyinView douyinView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (BOOL)dynamicComponent;
- (id)douyinView;
- (id)prohibitedContentViewNode;
- (void)setDouyinView:;
- (void)setProhibitedContentViewNode:;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
@end
