@interface MCRestrictionsPayload : MCPayload
@property (nonatomic) NSString iCloudPassword;
- (void).cxx_destruct;
- (id)restrictions;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)installationWarnings;
- (id)filterForUserEnrollmentOutError:;
- (id)_invalidFieldErrorWithFieldName:;
- (id)_restrictedFeatureStrings;
- (id)_enforcedFeatureStrings;
- (id)_intersectionStrings;
- (id)_unionStrings;
- (id)_defaultValueRestrictions;
- (id)localizedRestrictionStrings;
- (void)_insertRestrictedBoolForKey:value:preferenc:;
- (id)iCloudPassword;
- (void)setICloudPassword:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
