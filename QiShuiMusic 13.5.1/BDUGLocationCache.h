@interface BDUGLocationCache : NSObject
@property (nonatomic) MMKV cache;
- (void)removeAllModels;
- (id)modelOfClass:forKey:;
- (void)removeModelForKey:;
- (BOOL)setModel:forKey:;
- (id)init;
- (void)dealloc;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (BOOL)getBoolForKey:defaultValue:;
+ (double)getDoubleForKey:;
+ (double)getDoubleForKey:defaultValue:;
+ (id)getStringForKey:defaultValue:;
+ (BOOL)setString:forKey:;
+ (BOOL)setDouble:forKey:;
+ (BOOL)setBool:forKey:;
+ (id)sharedCache;
+ (id)getStringForKey:;
+ (BOOL)getBoolForKey:;
@end
