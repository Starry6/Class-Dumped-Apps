@interface AWEUGFCollectTracker : HTSService
@property (nonatomic) BOOL shouldMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportFCollectExceptionWithExceptionType:;
- (void)startMonitorFCollectException;
- (BOOL)shouldMonitor;
- (void)setShouldMonitor:;
+ (id)sharedManager;
@end
