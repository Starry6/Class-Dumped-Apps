@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase
@property (nonatomic) NSString payloadLDAPSearchSettingDescription;
@property (nonatomic) NSString payloadLDAPSearchSettingSearchBase;
@property (nonatomic) NSString payloadLDAPSearchSettingScope;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadLDAPSearchSettingDescription;
- (void)setPayloadLDAPSearchSettingDescription:;
- (id)payloadLDAPSearchSettingSearchBase;
- (void)setPayloadLDAPSearchSettingSearchBase:;
- (id)payloadLDAPSearchSettingScope;
- (void)setPayloadLDAPSearchSettingScope:;
+ (id)allowedPayloadKeys;
+ (id)buildWithLDAPSearchSettingDescription:withLDAPSearchSettingSearchBase:withLDAPSearchSettingScope:;
+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:;
@end
