@interface BWCameraLockScreenLaunchAnalyticsPayload : NSObject
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL prewarmed;
@property (nonatomic) BOOL ispStreamingStarted;
@property (nonatomic) NSInteger launchError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setCompleted:;
- (int)launchError;
- (id)eventName;
- (void)reset;
- (BOOL)completed;
- (id)eventDictionary;
- (BOOL)prewarmed;
- (void)setPrewarmed:;
- (BOOL)ispStreamingStarted;
- (void)setIspStreamingStarted:;
- (void)setLaunchError:;
@end
