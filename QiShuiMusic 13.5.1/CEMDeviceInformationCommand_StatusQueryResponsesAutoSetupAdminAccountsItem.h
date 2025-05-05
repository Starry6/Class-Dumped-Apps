@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase
@property (nonatomic) NSString statusGUID;
@property (nonatomic) NSString statusShortName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusGUID;
- (void)setStatusGUID:;
- (id)statusShortName;
- (void)setStatusShortName:;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithGUID:withShortName:;
@end
