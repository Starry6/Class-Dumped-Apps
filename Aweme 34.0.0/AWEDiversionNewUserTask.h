@interface AWEDiversionNewUserTask : NSObject
@property (nonatomic) BOOL needReport;
- (BOOL)needReport;
- (void)setNeedReport:;
- (void)actCommonGenerated;
- (void)reportLaunchIfNeeded;
- (void)reportReactInstall:completion:;
- (id)init;
- (void)dealloc;
@end
