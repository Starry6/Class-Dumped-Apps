@interface CLSilo : NSObject
@property (nonatomic) NSString identifier;
- (void)sync:;
- (id)registerForIdleNotifications:onResume:;
- (void)assertInside;
- (void)heartBeat:;
- (void)runIdleHandlers;
- (void)prepareAndRunBlock:;
- (void)assertOutside;
- (id)identifier;
- (id)newTimer;
- (void)suspend;
- (id)debugDescription;
- (BOOL)isSuspended;
- (void)resume;
- (BOOL)shouldBeIdled;
- (double)currentLatchedAbsoluteTimestamp;
- (void)afterInterval:async:;
- (void).cxx_destruct;
- (void)runResumeHandlers;
- (void)intendToSync;
- (id)initWithIdentifier:;
- (void)unregisterForIdleNotifications:;
- (void)async:;
- (id)copyWithZone:;
+ (id)main;
+ (void)setGlobalConfiguration:;
+ (id)globalConfiguration;
@end
