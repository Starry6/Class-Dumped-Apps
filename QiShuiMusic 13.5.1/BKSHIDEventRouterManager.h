@interface BKSHIDEventRouterManager : NSObject
@property (nonatomic) NSArray eventRouters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)_queue_routerDidChange:;
- (id)_initWithDeliveryManager:;
- (id)eventRouters;
- (void)setEventRouters:;
- (id)_targetForDestination:;
- (void)_queue_flush;
- (id)_queue_succinctDescriptionBuilder;
+ (id)sharedInstance;
@end
