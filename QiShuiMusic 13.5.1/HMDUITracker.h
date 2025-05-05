@interface HMDUITracker : NSObject
@property (nonatomic) <HMDUITrackerDelegate> delegate;
- (void)trackWithName:event:parameters:;
- (void)trackableContext:didTriggerEvent:;
- (void)trackableContext:didTriggerEvent:parameters:;
- (void)trackableContext:eventWithName:parameters:;
- (void)trackableContextDidEnd:;
- (void)trackableContextDidStart:;
- (id)init;
- (void)didEnterBackground:;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)willResignActive:;
- (id)delegate;
- (void).cxx_destruct;
- (void)willEnterForeground:;
- (void)didBecomeActive:;
+ (id)sharedInstance;
@end
