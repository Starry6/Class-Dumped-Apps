@interface SACurrentDisplayRouteClientState : SAAceClientState
@property (nonatomic) NSArray activeDisplayRoutes;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)activeDisplayRoutes;
- (void)setActiveDisplayRoutes:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)currentDisplayRouteClientState;
+ (id)currentDisplayRouteClientStateWithDictionary:context:;
@end
