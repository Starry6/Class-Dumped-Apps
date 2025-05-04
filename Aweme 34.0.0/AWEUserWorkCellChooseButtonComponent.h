@interface AWEUserWorkCellChooseButtonComponent : AWERLComponent
@property (nonatomic) AWERLButtonVirtualNode chooseButtonVirtualNode;
@property (nonatomic) AWERLFlexChildVirtualNode chooseButtonNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chooseButton;
- (id)virtualNodeWithChildren:;
- (BOOL)dynamicComponent;
- (id)chooseButtonVirtualNode;
- (void)setImageWithProps:;
- (id)chooseButtonNode;
- (void)chooseButtonClick;
- (void)setChooseButtonVirtualNode:;
- (void)setChooseButtonNode:;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
@end
