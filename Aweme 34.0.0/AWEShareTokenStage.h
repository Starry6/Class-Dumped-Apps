@interface AWEShareTokenStage : AWEShareBaseStage
@property (nonatomic) BOOL shouldRun;
- (void)makeEventContext;
- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)openDestinationAppWithShareType:;
- (void)jumpWithoutAlert;
- (void)showAlertWithText:;
- (void)trackVSEvent:withDict:;
- (void)trackTokenShowEvent;
- (void)trackTokenClickEvent;
- (void)trackTokenCancelEvent;
- (id)jumpAppNameWithShareType:;
- (void)run;
- (void)setShouldRun:;
- (BOOL)shouldRun;
@end
