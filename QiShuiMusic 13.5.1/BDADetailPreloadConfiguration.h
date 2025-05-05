@interface BDADetailPreloadConfiguration : NSObject
@property (nonatomic) NSDictionary settings;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
+ (id)vid;
+ (unsigned long long)cacheOftenCount;
+ (unsigned long long)cacheOccasionCount;
+ (id)commonRequestParams;
+ (id)connectMethodName;
+ (BOOL)enablePreload;
+ (id)idfa;
+ (id)idfv;
+ (id)resolutionString;
+ (id)ssMix;
+ (id)versionName;
+ (id)sharedInstance;
+ (id)currentChannel;
+ (id)appName;
+ (id)systemVersion;
+ (id)platformName;
+ (id)aid;
@end
