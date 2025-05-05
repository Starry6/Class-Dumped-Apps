@interface IMDefaults : NSObject
- (void)setBool:forDomain:forKey:;
- (id)getValueFromDomain:forKey:;
- (BOOL)getBoolFromDomain:forKey:;
- (BOOL)getBoolFromDomain:forKey:defaultValue:;
- (void)setValue:forDomain:forKey:;
+ (id)sharedInstance;
@end
