@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase
@property (nonatomic) NSNumber statusAllowed;
@property (nonatomic) NSString statusBundleID;
@property (nonatomic) NSString statusName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusName;
- (void)setStatusName:;
- (id)statusAllowed;
- (void)setStatusAllowed:;
- (id)statusBundleID;
- (void)setStatusBundleID:;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllowed:withBundleID:withName:;
@end
