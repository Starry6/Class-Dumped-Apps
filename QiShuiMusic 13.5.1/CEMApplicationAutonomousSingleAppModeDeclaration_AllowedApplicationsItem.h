@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase
@property (nonatomic) NSString payloadBundleIdentifier;
@property (nonatomic) NSString payloadTeamIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadBundleIdentifier;
- (void)setPayloadBundleIdentifier:;
- (id)payloadTeamIdentifier;
- (void)setPayloadTeamIdentifier:;
+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:withTeamIdentifier:;
+ (id)buildRequiredOnlyWithBundleIdentifier:withTeamIdentifier:;
@end
