@interface AWEUndertakeAppListReporter : NSObject
@property (nonatomic) BOOL coldLaunchReport;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hostAppCollectCanOpenURL:;
- (void)trackLogWithMessage:;
- (void)reportAppList;
- (void)setColdLaunchReport:;
- (BOOL)checkIfNeedReport;
- (BOOL)coldLaunchReport;
+ (id)sharedManager;
@end
