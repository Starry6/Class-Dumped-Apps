@interface AWEPlayInteractionBaseController : AWEPlayInteractionNewBaseController
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) AWEPlayInteractionViewController container;
@property (nonatomic) AWEPlayInteractionDispatcherManager dispatcherManager;
@property (nonatomic) AWEElementContainer immersiveBottomContainer;
- (id)immersiveBottomContainer;
@end
