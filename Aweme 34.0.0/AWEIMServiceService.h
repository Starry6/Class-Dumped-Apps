@interface AWEIMServiceService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIMStorageWithInteger:key:;
- (long long)getIMStorageIntegerForKey:;
+ (id)performanceTrackerWithEvent:scene:;
+ (id)networkPerformanceTrackerWithEvent:scene:;
+ (BOOL)shouldTrackWithSampleRate:;
@end
