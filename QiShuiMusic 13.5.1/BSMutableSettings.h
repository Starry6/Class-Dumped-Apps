@interface BSMutableSettings : BSSettings
- (void)removeAllSettings;
- (void)applySettings:;
- (id)copyWithZone:;
- (void)setFlag:forSetting:;
- (void)setObject:forSetting:;
@end
