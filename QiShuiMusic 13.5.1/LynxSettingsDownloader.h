@interface LynxSettingsDownloader : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> scheduleTimer;
- (void)schedule:shouldRetry:;
- (void)scheduleSettingsFetch;
- (BOOL)shouldFetchImmediately;
- (void)syncSettings:source:;
- (void)updateResponseData:;
- (id)init;
- (void)setScheduleTimer:;
- (void).cxx_destruct;
- (id)scheduleTimer;
+ (id)getSettingsQueue;
+ (void)reportFetchEventWithUrl:source:data:error:;
+ (double)timeForNextFetch;
+ (id)sharedInstance;
@end
