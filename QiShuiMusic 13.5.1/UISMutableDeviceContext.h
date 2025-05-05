@interface UISMutableDeviceContext : UISDeviceContext
- (id)copyWithZone:;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:;
- (void)setDeviceInfoValue:forKey:;
@end
