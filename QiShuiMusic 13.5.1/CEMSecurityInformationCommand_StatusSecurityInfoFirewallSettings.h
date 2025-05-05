@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase
@property (nonatomic) NSNumber statusFirewallEnabled;
@property (nonatomic) NSNumber statusBlockAllIncoming;
@property (nonatomic) NSNumber statusStealthMode;
@property (nonatomic) NSArray statusApplications;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusFirewallEnabled;
- (void)setStatusFirewallEnabled:;
- (id)statusBlockAllIncoming;
- (void)setStatusBlockAllIncoming:;
- (id)statusStealthMode;
- (void)setStatusStealthMode:;
- (id)statusApplications;
- (void)setStatusApplications:;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:withBlockAllIncoming:withStealthMode:withApplications:;
@end
