@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator
- (id)init;
- (id)initWithProfile:;
- (int)profile;
- (id)_newProgramWithHashCode:engineContext:introspectionDataPtr:;
@end
