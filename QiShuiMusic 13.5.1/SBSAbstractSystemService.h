@interface SBSAbstractSystemService : SBSAbstractFacilityService
@property (nonatomic) SBSSystemServiceClient client;
- (id)client;
+ (Class)serviceFacilityClientClass;
@end
