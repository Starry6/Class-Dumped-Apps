@interface AWENovelComicWelfarePlugin : BDNovelComicBaseWelfarePlugin
- (void)pluginReaderViewDidLoad;
- (void)pluginReaderDealloc;
- (id)createWelfareView;
- (void)pluginReaderPageChange:target:changeInfo:;
- (void)pluginReaderViewWillAppear;
- (void)pluginReaderViewWillDisAppear;
- (id)getAdapter;
- (BOOL)isFromFestival;
+ (void)managerDidFirstStart;
@end
