@interface SANPMoveOutputGroupToDevicesResponse : SABaseCommand
@property (nonatomic) NSString routeResponse;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)routeResponse;
- (void)setRouteResponse:;
+ (id)moveOutputGroupToDevicesResponse;
+ (id)moveOutputGroupToDevicesResponseWithDictionary:context:;
@end
