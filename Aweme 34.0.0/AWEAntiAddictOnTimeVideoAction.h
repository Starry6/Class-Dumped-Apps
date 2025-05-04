@interface AWEAntiAddictOnTimeVideoAction : AWEAntiAddictVideoAction
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:;
- (void)postDeleteFeedNotification;
- (void)loopWithAntiAddictTimer;
- (BOOL)satisfiedWithSuppressLimit:showedRecords:now:;
- (void)begin;
- (void)end;
- (void)prepare;
- (long long)priority;
- (void)revoke;
+ (id)moduleName;
@end
