@interface SASettingSetCellularData : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setCellularData;
+ (id)setCellularDataWithDictionary:context:;
@end
