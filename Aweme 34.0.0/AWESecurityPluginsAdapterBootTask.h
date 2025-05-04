@interface AWESecurityPluginsAdapterBootTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)errorOverwhelmingCount;
+ (long long)errorOverwhelmingDuration;
+ (long long)safeDuraionAfterOverWhelming;
+ (long long)syncCheckTimeLimit;
+ (id)autoSeclinkBaseUrl;
+ (id)webViewConfig;
+ (void)forceWebHttps;
+ (void)execute;
@end
