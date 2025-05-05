@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary statusGlobalRestrictions;
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions statusProfileRestrictions;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusGlobalRestrictions;
- (void)setStatusGlobalRestrictions:;
- (id)statusProfileRestrictions;
- (void)setStatusProfileRestrictions:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithGlobalRestrictions:withProfileRestrictions:;
+ (id)buildRequiredOnlyWithGlobalRestrictions:withProfileRestrictions:;
@end
