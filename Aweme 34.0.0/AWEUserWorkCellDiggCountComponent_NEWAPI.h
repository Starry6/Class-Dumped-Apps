@interface AWEUserWorkCellDiggCountComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) AWERLVirtualFlexView containerVirtualView;
@property (nonatomic) AWERLVirtualImageView diggIconVirtualView;
@property (nonatomic) AWERLVirtualLabel diggCountVirtualView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildVirtualView:;
- (id)containerVirtualView;
- (void)setContainerVirtualView:;
- (id)aAWEPostWorkViewControllerAdapter;
- (id)diggCountVirtualView;
- (id)diggIconVirtualView;
- (void)setDiggIconVirtualView:;
- (void)setDiggCountVirtualView:;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (void)updateUI;
+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)componentWithData:context:;
@end
