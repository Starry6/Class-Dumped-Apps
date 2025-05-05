@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject
@property (nonatomic) <AVFigRouteDiscovererFactory> routeDiscovererFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithRouteDiscovererFactory:;
- (id)outputDeviceDiscoverySessionOfClass:withDeviceFeatures:;
- (id)routeDiscovererFactory;
@end
