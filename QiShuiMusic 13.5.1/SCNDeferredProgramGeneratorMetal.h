@interface SCNDeferredProgramGeneratorMetal : SCNCommonProfileProgramGenerator
- (id)init;
- (void)dealloc;
- (int)profile;
- (id)_newProgramWithHashCode:engineContext:introspectionDataPtr:;
@end
