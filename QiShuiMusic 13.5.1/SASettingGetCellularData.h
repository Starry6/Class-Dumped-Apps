@interface SASettingGetCellularData : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:context:;
@end
