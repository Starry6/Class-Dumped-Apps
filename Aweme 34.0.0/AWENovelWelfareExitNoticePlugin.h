@interface AWENovelWelfareExitNoticePlugin : BDNovelReaderBasePlugin
- (BOOL)pluginReaderOnBDReaderShouldPageTransitionWithReadModel:isForward:point:translation:;
- (BOOL)isShowTransferPopup;
- (void)showTransferPopup;
+ (void)managerDidFirstStart;
@end
