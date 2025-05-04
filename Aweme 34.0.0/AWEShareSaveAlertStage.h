@interface AWEShareSaveAlertStage : AWEShareBaseStage
@property (nonatomic) BOOL shouldRun;
- (id)aAWEPadModuleAdapter;
- (void)showAlertWithContext:completion:;
- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)prepareShareAwemeContext:;
- (void)run;
- (void)setShouldRun:;
- (BOOL)shouldRun;
+ (Class)aAWEPadModuleAdapterClass;
@end
