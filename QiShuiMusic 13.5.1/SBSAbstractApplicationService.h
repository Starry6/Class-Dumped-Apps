@interface SBSAbstractApplicationService : SBSAbstractFacilityService
@property (nonatomic) SBSApplicationClient client;
- (id)client;
+ (Class)serviceFacilityClientClass;
@end
