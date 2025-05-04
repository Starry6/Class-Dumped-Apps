@interface AWELogConfigServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)minimumLogLevel;
- (id)customKey;
- (void)initLog;
- (void)initLogWithLevel:;
- (id)appId;
+ (id)sharedInstance;
@end
