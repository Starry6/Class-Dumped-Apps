@interface SASettingOpenCellularData : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openCellularData;
+ (id)openCellularDataWithDictionary:context:;
@end
