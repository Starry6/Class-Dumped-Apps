@interface BSMutableKeyedSettings : BSKeyedSettings
- (void)removeAllSettings;
- (void)setObject:forKey:;
- (void)setFlag:forKey:;
- (void)applySettings:;
- (id)copyWithZone:;
@end
