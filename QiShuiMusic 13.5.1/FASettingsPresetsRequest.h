@interface FASettingsPresetsRequest : FAFamilyCircleRequest
- (void).cxx_destruct;
- (id)initWithFamilyMember:;
- (id)initWithFamilyMemberAltDSID:;
- (id)initWithChildAge:;
- (id)fetchPresets;
- (void)fetchPresetsWithCompletion:;
- (id)fetchCachedPresets;
- (void)fetchCachedPresetsWithCompletion:;
@end
