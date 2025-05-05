@interface CEMPredicateCompositeBudget : CEMPredicateBase
@property (nonatomic) NSString payloadCalendarIdentifier;
@property (nonatomic) CEMPredicateCompositeBudget_Monitors payloadMonitors;
@property (nonatomic) NSArray payloadNotificationTimes;
@property (nonatomic) NSArray payloadTimeBudget;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadCalendarIdentifier;
- (void)setPayloadCalendarIdentifier:;
- (id)payloadNotificationTimes;
- (void)setPayloadNotificationTimes:;
- (id)payloadTimeBudget;
- (void)setPayloadTimeBudget:;
- (id)payloadMonitors;
- (void)setPayloadMonitors:;
+ (id)buildWithCalendarIdentifier:withMonitors:withNotificationTimes:withTimeBudget:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMonitors:withTimeBudget:;
@end
