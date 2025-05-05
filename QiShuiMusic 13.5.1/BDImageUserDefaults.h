@interface BDImageUserDefaults : NSObject
@property (nonatomic) ^{__CFString=} appNameRef;
@property (nonatomic) BOOL isPreferenceFileExcluded;
- (id)appNameRef;
- (id)filePathForPreferencesName:;
- (BOOL)isPreferenceFileExcluded;
- (void)removePreferenceFileWithSuiteName:;
- (void)scheduleSynchronize;
- (void)setIsPreferenceFileExcluded:;
- (float)floatForKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)setDouble:forKey:;
- (void)setBool:forKey:;
- (BOOL)boolForKey:;
- (id)stringForKey:;
- (void)synchronize;
- (id)initWithSuiteName:;
- (void)setInteger:forKey:;
- (id)arrayForKey:;
- (void)setFloat:forKey:;
- (id)objectForKey:;
- (double)doubleForKey:;
- (void)removeObjectForKey:;
- (long long)integerForKey:;
- (id)dictionaryForKey:;
+ (id)standardUserDefaults;
@end
