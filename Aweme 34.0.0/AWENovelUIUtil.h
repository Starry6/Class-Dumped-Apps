@interface AWENovelUIUtil : BDNovelBaseUIUtil
- (id)createNavigationBar;
- (id)createLoadingView;
- (id)createFailViewWithError:;
- (id)lottieHolder;
- (void)pasteboardSetString:;
- (void)openAppGalleryWithImages:selectIndex:targetView:extra:;
- (id)createBackButtonView;
- (void)didThemeChanged:;
- (id)init;
- (void)dealloc;
@end
