@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase
@property (nonatomic) NSNumber statusPasswordExists;
@property (nonatomic) NSNumber statusChangePending;
@property (nonatomic) NSNumber statusAllowOroms;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusPasswordExists;
- (void)setStatusPasswordExists:;
- (id)statusChangePending;
- (void)setStatusChangePending:;
- (id)statusAllowOroms;
- (void)setStatusAllowOroms:;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:withChangePending:withAllowOroms:;
@end
