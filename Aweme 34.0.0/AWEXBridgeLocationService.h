@interface AWEXBridgeLocationService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestCurrentLocationWithParams:completion:;
- (void)requestLocationPermission:completion:;
@end
