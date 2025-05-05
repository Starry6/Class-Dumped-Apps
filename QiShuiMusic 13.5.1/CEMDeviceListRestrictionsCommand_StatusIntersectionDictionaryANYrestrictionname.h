@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase
@property (nonatomic) NSArray statusValues;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusValues;
- (void)setStatusValues:;
+ (id)allowedStatusKeys;
+ (id)buildWithValues:;
+ (id)buildRequiredOnlyWithValues:;
@end
