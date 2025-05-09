@interface AWEKnowledgeRichContentImpl.FullpageFeedNewHeaderViewController : AWEFullPageBaseContainerViewController
- (void)configWithHeaderModel:;
- (void)listDidReloadDataWithCollectionView:;
- (void)sectionControllerWillEnterWorkingRange:;
- (id)enterFrom;
- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionForZoomType:gestureRecognizer:;
- (id)transition_destinatedViewControllerForZoomType:gestureRecognizer:;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:;
- (void)listWillPerformBatchUpdatesWithCollectionView:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
- (void)executePageModeChangeAnimation:;
- (void)onPageModeWillChange:;
- (void)onPageModeDidChage:;
- (void)discoverButtonClickWithGesture:;
- (void)transition_didEndPinchTransitionWithContext:;
- (void)muteAwemeCanceled;
- (void)muteAwemeMessage;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (BOOL)disableContentOffsetRestorationAnchor;
- (id)itemID;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)initWithCoder:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupCollectionView:;
- (double)heightForHeaderView;
+ (Class)viewModelClass;
+ (Class)viewHolderClass;
@end
