@interface AccessoryDetection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accessoryEndpointDetached:forConnection:;
- (void)accessoryEndpointAttached:transportType:protocol:properties:forConnection:;
- (void)start;
- (void)stop;
- (id)initWithAABC:;
@end
