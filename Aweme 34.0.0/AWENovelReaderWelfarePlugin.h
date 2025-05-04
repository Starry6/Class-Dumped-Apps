@interface AWENovelReaderWelfarePlugin : BDNovelReaderBaseWelfarePlugin
- (id)createWelfareView;
- (void)pluginReaderVCPageChangeWithReadModel:curPageContext:targetPageContext:changeInfo:;
- (void)pluginReaderDidAppear;
- (void)pluginReaderDidDisAppear;
- (void)pluginReaderBookInfoDidReady;
- (void)pluginReaderVCDealloc;
- (void)pluginReaderConfigChange:;
- (void)pluginReaderTextPageDidRender:;
- (id)createBottomBarViewWithReaderModel:pageContext:;
- (id)welfareRequestBottomViewWithReaderModel:pageContext:bottomFrame:;
- (id)getAdapter;
- (BOOL)isFromFestival;
+ (void)managerDidFirstStart;
@end
