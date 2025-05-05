@interface SALocalSearchVehicleEventSearchCompleted : SABaseCommand
@property (nonatomic) NSArray events;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setEvents:;
- (id)encodedClassName;
- (id)events;
+ (id)vehicleEventSearchCompleted;
+ (id)vehicleEventSearchCompletedWithDictionary:context:;
@end
