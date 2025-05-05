@interface BYAnalyticsExpressRestore : NSObject
@property (nonatomic) BOOL paneShown;
@property (nonatomic) Q restoreChoice;
@property (nonatomic) BOOL offeredBackup;
- (id)eventPayload;
- (id)initWithAnalyticsManager:;
- (BOOL)paneShown;
- (void)setPaneShown:;
- (unsigned long long)restoreChoice;
- (void)setRestoreChoice:;
- (BOOL)offeredBackup;
- (void)setOfferedBackup:;
@end
