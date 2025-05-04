@interface AWEProfileHeaderCraftsmanBillboardComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode node;
@property (nonatomic) AWEProfileCraftsmanBillboardButton button;
@property (nonatomic) UIView containerView;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasTrackedShow;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (void)configButton;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (BOOL)shouldShowArea;
- (id)node;
- (void)setButton:;
- (id)containerView;
- (double)maxWidth;
- (void)setContainerView:;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)button;
- (void)setNode:;
@end
