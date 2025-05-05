@interface CLSettingsDictionary : NSObject
@property (nonatomic) NSDictionary dictionary;
- (id)dictionary;
- (id)dictionaryForKey:defaultValue:;
- (BOOL)hasValueForKey:;
- (void)dealloc;
- (void)setDictionary:;
- (id)initWithDictionary:;
- (int)intForKey:defaultValue:;
- (id)stringForKey:defaultValue:;
- (BOOL)boolForKey:defaultValue:;
- (float)floatForKey:defaultValue:;
- (long long)longForKey:defaultValue:;
- (short)shortForKey:defaultValue:;
- (double)doubleForKey:defaultValue:;
- (BOOL)isEqual:;
- (id)arrayForKey:defaultValue:;
+ (id)settingsWithDictionary:;
@end
