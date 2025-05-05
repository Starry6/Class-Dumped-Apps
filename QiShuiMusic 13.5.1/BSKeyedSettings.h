@interface BSKeyedSettings : BSSettings
- (long long)flagForKey:;
- (void)enumerateKeyedObjectsWithBlock:;
- (id)_keyDescriptionForSetting:;
- (id)_valueDescriptionForFlag:object:ofSetting:multilinePrefix:;
- (BOOL)boolForKey:;
- (void)enumerateKeyedFlagsWithBlock:;
- (void)_removeAllSettings;
- (BOOL)isKeyedSettings;
- (id)initWithXPCDictionary:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)_init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
@end
