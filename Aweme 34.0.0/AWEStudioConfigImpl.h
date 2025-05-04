@interface AWEStudioConfigImpl : ACCConfigImpl
@property (nonatomic) ACCConfigImpl config;
- (BOOL)boolValueForKeyPath:defaultValue:;
- (id)dictionaryForKeyPath:defaultValue:;
- (id)stringForKeyPath:defaultValue:;
- (long long)intValueForKeyPath:defaultValue:;
- (id)arrayForKeyPath:defaultValue:;
- (double)doubleValueForKeyPath:defaultValue:;
- (id)_stringForKeyPath:defaultValue:;
- (id)_arrayForKeyPath:defaultValue:;
- (id)_dictionaryForKeyPath:defaultValue:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
@end
