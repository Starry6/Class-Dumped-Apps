@interface DIRSEnviroment : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__datairis_parameter__app_name;
- (id)__datairis_parameter__app_version;
- (id)__datairis_parameter__app_version_minor;
- (id)__datairis_parameter__display_name;
- (id)__datairis_parameter__package;
+ (id)moduleId;
+ (id)sdkVersionString;
+ (id)osVersion;
+ (id)sharedInstance;
+ (id)platform;
+ (id)osName;
+ (long long)sdkVersion;
+ (id)moduleVersion;
@end
