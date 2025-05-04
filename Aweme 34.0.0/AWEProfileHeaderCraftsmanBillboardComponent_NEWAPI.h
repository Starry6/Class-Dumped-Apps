@interface AWEProfileHeaderCraftsmanBillboardComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) AWEProfileHeaderVirtualView virtualView;
@property (nonatomic) AWEProfileCraftsmanBillboardButton button;
@property (nonatomic) UIView containerView;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasTrackedShow;
- (id)buildVirtualView:;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (void)configButton;
- (void)setVirtualView:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (BOOL)shouldShowArea;
- (void)setButton:;
- (id)containerView;
- (double)maxWidth;
- (void)setContainerView:;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)button;
- (id)virtualView;
@end
