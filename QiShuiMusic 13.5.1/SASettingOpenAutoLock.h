@interface SASettingOpenAutoLock : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openAutoLock;
+ (id)openAutoLockWithDictionary:context:;
@end
