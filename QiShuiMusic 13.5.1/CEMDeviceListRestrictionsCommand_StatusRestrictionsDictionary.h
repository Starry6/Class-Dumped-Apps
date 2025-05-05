@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary statusRestrictedBool;
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusValueDictionary statusRestrictedValue;
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary statusIntersection;
@property (nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary statusUnion;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusRestrictedBool;
- (void)setStatusRestrictedBool:;
- (id)statusRestrictedValue;
- (void)setStatusRestrictedValue:;
- (id)statusIntersection;
- (void)setStatusIntersection:;
- (id)statusUnion;
- (void)setStatusUnion:;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRestrictedBool:withRestrictedValue:withIntersection:withUnion:;
@end
