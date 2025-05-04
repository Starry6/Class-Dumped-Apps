@interface AWEAntiAddictSleepMaskAction : AWEAntiAddictBaseAction
- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:;
- (void)postDeleteFeedNotification;
- (void)begin;
- (void)end;
- (void)prepare;
- (void)revoke;
+ (id)moduleName;
@end
