@interface CEMEventSubscriptionNowCommand : CEMCommandBase
@property (nonatomic) NSArray payloadEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadEvents;
- (void)setPayloadEvents:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (int)executionLevel;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:withEvents:;
+ (id)buildWithIdentifier:withEvents:;
@end
