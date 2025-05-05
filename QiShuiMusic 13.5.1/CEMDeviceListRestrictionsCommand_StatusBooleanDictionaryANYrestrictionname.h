@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase
@property (nonatomic) NSNumber statusValue;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)statusValue;
- (void)setStatusValue:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
+ (id)allowedStatusKeys;
+ (id)buildWithValue:;
+ (id)buildRequiredOnlyWithValue:;
@end
