@interface IESGurdSettingsConfig : NSObject
@property (nonatomic) NSArray hostAppIdsArray;
@property (nonatomic) q pollingInterval;
@property (nonatomic) BOOL pollingEnabled;
- (id)hostAppIdsArray;
- (BOOL)isPollingEnabled;
- (void)setHostAppIdsArray:;
- (void)setPollingEnabled:;
- (long long)pollingInterval;
- (void).cxx_destruct;
- (void)setPollingInterval:;
+ (id)configWithDictionary:;
@end
