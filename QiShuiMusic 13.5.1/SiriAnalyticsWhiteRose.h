@interface SiriAnalyticsWhiteRose : NSObject
- (void)_destroyActiveClockWithCompletion:;
- (void)_maximumClockLifeExpired;
- (void)_inactivityTimerElapsed;
- (void)_startMaximumClockLifeTimer;
- (void)markTimeForAnnotatedMessages:completion:;
- (void)sensitiveCondition:endedAt:completion:;
- (void).cxx_destruct;
- (void)sensitiveCondition:startedAt:completion:;
- (void)destroyActiveClockWithCompletion:;
- (id)markTimeForAnnotatedMessage:withRootClock:;
- (id)initWithQueue:delegate:metastore:;
- (void)_cancelMaximumClockLifeTimer;
- (void)_startInactivityTimer;
- (void)_ensureActiveClockStartingAt:completion:;
- (void)_cancelInactivityTimer;
+ (void)reportRedactionSummaryForTimestamp:spans:andDidRedact:;
@end
