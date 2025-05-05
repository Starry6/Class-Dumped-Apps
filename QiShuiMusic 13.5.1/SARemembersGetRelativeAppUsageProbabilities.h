@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand
@property (nonatomic) NSArray bundleIDs;
@property (nonatomic) q days;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIDs;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setBundleIDs:;
- (long long)days;
- (BOOL)mutatingCommand;
- (void)setDays:;
+ (id)getRelativeAppUsageProbabilities;
+ (id)getRelativeAppUsageProbabilitiesWithDictionary:context:;
@end
