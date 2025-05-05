@interface CNUIIDSContactPropertyResolver : NSObject
@property (nonatomic) CNUIIDSAvailabilityProvider idsAvailabilityProvider;
- (id)idsAvailabilityProvider;
- (void).cxx_destruct;
- (id)resolveBestFaceTimeIDSPropertyForContact:schedulerProvider:;
- (id)resolveBestIMessageIDSPropertyForContact:schedulerProvider:;
- (id)initWithIDSAvailabilityProvider:;
- (id)resolveBestIDSPropertyForContact:schedulerProvider:usingAvailabilityProviderCall:;
- (id)resolveBestExpanseIDSPropertyForContact:schedulerProvider:;
- (id)resolveIDSPropertiesForContact:schedulerProvider:usingAvailabilityProviderCall:;
- (id)resolveAllFaceTimeIDSPropertiesForContact:schedulerProvider:;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForCopyingStrippedContact:;
+ (id)IDSRelevantPropertiesForContact:;
@end
