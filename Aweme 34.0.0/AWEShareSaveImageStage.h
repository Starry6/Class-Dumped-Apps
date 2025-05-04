@interface AWEShareSaveImageStage : AWEShareBaseStage
- (void)trackQRCodeSaveEventIfNeeded;
- (void)showRedirectAlert;
- (void)openDestinationApp;
- (void)run;
- (BOOL)shouldRun;
@end
