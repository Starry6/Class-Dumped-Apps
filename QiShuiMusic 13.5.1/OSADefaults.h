@interface OSADefaults : NSObject
+ (void)setObject:forKey:;
+ (void)setBool:forKey:;
+ (BOOL)boolForKey:;
+ (id)objectForKey:;
+ (void)sendOperation:forKey:withBlock:;
@end
