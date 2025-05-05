@interface SADailyBriefingSetETAInfo : SABaseClientBoundCommand
@property (nonatomic) NSString destination;
@property (nonatomic) double eta;
@property (nonatomic) NSString transportType;
@property (nonatomic) NSString viaRoute;
- (void)setDestination:;
- (void)setTransportType:;
- (id)groupIdentifier;
- (id)transportType;
- (id)destination;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)eta;
- (void)setEta:;
- (id)viaRoute;
- (void)setViaRoute:;
@end
