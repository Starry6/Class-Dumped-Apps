@interface STOuterTest.STAppUpdateHelper : NSObject
- (BOOL)decideIsInhouseApp;
- (void)dismissTipView;
- (void)openWithDownloadUrl:;
- (void)showUpdateViewWithModel:error:;
- (void)updateViewShouldNotShow;
- (void)receiveNotificationWithNotification:;
- (id)init;
- (void).cxx_destruct;
@end
