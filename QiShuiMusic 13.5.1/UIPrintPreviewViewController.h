@interface UIPrintPreviewViewController : UIViewController
@property (nonatomic) UIPrintPreviewPageFetcher pageFetcher;
@property (nonatomic) @? completionHandler;
@property (nonatomic) UIPrintPreviewInfo previewInfo;
@property (nonatomic) UIPrintInfo printInfo;
@property (nonatomic) q totalPageCount;
@property (nonatomic) NSURL pdfURL;
@property (nonatomic) NSURL sharePDFFileURL;
@property (nonatomic) BOOL visibleItemsUpdated;
@property (nonatomic) NSArray updatedvisibleItems;
@property (nonatomic) UIButton layoutPopupButton;
@property (nonatomic) NSLayoutConstraint layoutPopupButtonTopConstraint;
@property (nonatomic) UIAction pagesPopupAction;
@property (nonatomic) UIAction sheetsPopupAction;
@property (nonatomic) NSLayoutConstraint collectionViewTopConstant;
@property (nonatomic) q previewScrollDirection;
@property (nonatomic) UIDocumentInteractionController documentInteractionController;
@property (nonatomic) UIImageView pinchGestureBeginningPageImageView;
@property (nonatomic) UIImageView pinchAnimationView;
@property (nonatomic) UIView pinchAnimationWhiteBackgroundView;
@property (nonatomic) {CGPoint=dd} pinchGestureLastPoint;
@property (nonatomic) double pinchGestureLastScale;
@property (nonatomic) UIPrintPanelViewController printPanelViewController;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL presentingDocumentInteractionController;
@property (nonatomic) NSURL quickLookPDFURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionView:previewForHighlightingContextMenuWithConfiguration:;
- (id)collectionView:previewForDismissingContextMenuWithConfiguration:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)collectionView:contextMenuConfigurationForItemAtIndexPath:point:;
- (void)updateLayout;
- (void)handlePinch:;
- (void)collectionView:prefetchItemsAtIndexPaths:;
- (void)dealloc;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (long long)collectionView:numberOfItemsInSection:;
- (BOOL)needRedrawWithNUp;
- (void)setCompletionHandler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (double)headerHeight;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)printInfo;
- (void)setCollectionView:;
- (void)setPrintInfo:;
- (void).cxx_destruct;
- (id)printPanelViewController;
- (void)setScrollDirection:;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (void)viewDidLayoutSubviews;
- (void)collectionView:willPerformPreviewActionForMenuWithConfiguration:animator:;
- (void)setPrintPanelViewController:;
- (void)viewDidLoad;
- (id)completionHandler;
- (id)previewSize;
- (void)setupCollectionView;
- (id)documentInteractionControllerViewControllerForPreview:;
- (void)documentInteractionControllerDidEndPreview:;
- (void)documentInteractionController:didEndSendingToApplication:;
- (id)excludedActivityTypesForDocumentInteractionController:;
- (id)documentInteractionController;
- (BOOL)nUpActive;
- (BOOL)canModifyPageRange;
- (BOOL)pageIndexIsInRange:;
- (void)pageBadgeTapped:;
- (BOOL)canSetStartPage:forPageIndex:;
- (void)setStartPage:forPageIndex:;
- (BOOL)canSetEndPage:forPageIndex:;
- (void)setEndPage:forPageIndex:;
- (BOOL)canAddPage:forPageIndex:;
- (void)addPage:forPageIndex:;
- (BOOL)canRemovePage:forPageIndex:;
- (void)removePage:forPageIndex:;
- (BOOL)canAddAllPages:;
- (void)addAllPages:;
- (BOOL)canShowMenuBar;
- (id)previewCollectionView;
- (id)initWithScrollDirection:printPanelViewController:;
- (void)setupPreivewPageFetcher;
- (void)setupLayoutControl;
- (void)updateLayoutControl;
- (void)layoutPopupButtonChanged:;
- (void)updatePdfURL:options:completed:;
- (void)updateLayoutWithPdfUpdate:;
- (void)updatePrintPreviewInfo:;
- (void)resetPrintPreview;
- (void)updateHeaderFooterSizes;
- (void)updatePageRange:;
- (double)_paperAspectRatio;
- (void)_mainQueue_reloadItemAtIndex:;
- (void)reloadVisibleItems:;
- (BOOL)visibleItemsUpdateNeeded;
- (id)sortedVisibleIndexPaths;
- (id)previewVisibleItemsRange;
- (void)gotoFirstPage:;
- (void)gotoLastPage:;
- (void)updateQuicklookPDF;
- (void)pageRangeUpdated;
- (id)printPagePreviewViewControllerForItemAtPageIndex:;
- (id)printPagePreviewActionItemsWithPageIndex:;
- (id)_tempURLForPreviewing;
- (id)getSharedPDFFileURL;
- (id)documentInteractionControllerByPreparedForPreviewing;
- (void)previewPDF;
- (void)animateCellAndPresentDocumentInteractionController;
- (BOOL)presentingDocumentInteractionController;
- (void)setPresentingDocumentInteractionController:;
- (id)quickLookPDFURL;
- (void)setQuickLookPDFURL:;
- (id)pageFetcher;
- (void)setPageFetcher:;
- (id)previewInfo;
- (void)setPreviewInfo:;
- (long long)totalPageCount;
- (void)setTotalPageCount:;
- (id)pdfURL;
- (void)setPdfURL:;
- (id)sharePDFFileURL;
- (void)setSharePDFFileURL:;
- (BOOL)visibleItemsUpdated;
- (void)setVisibleItemsUpdated:;
- (id)updatedvisibleItems;
- (void)setUpdatedvisibleItems:;
- (id)layoutPopupButton;
- (void)setLayoutPopupButton:;
- (id)layoutPopupButtonTopConstraint;
- (void)setLayoutPopupButtonTopConstraint:;
- (id)pagesPopupAction;
- (void)setPagesPopupAction:;
- (id)sheetsPopupAction;
- (void)setSheetsPopupAction:;
- (id)collectionViewTopConstant;
- (void)setCollectionViewTopConstant:;
- (long long)previewScrollDirection;
- (void)setPreviewScrollDirection:;
- (void)setDocumentInteractionController:;
- (id)pinchGestureBeginningPageImageView;
- (void)setPinchGestureBeginningPageImageView:;
- (id)pinchAnimationView;
- (void)setPinchAnimationView:;
- (id)pinchAnimationWhiteBackgroundView;
- (void)setPinchAnimationWhiteBackgroundView:;
- (id)pinchGestureLastPoint;
- (void)setPinchGestureLastPoint:;
- (double)pinchGestureLastScale;
- (void)setPinchGestureLastScale:;
@end
