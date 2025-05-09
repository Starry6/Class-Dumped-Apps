@interface UIWebPDFView : UIView
@property (nonatomic) WebPDFViewPlaceholder pdfPlaceHolderView;
@property (nonatomic) NSURL documentURL;
@property (nonatomic) double initialZoomScale;
@property (nonatomic) UIColor backgroundColorForUnRenderedContent;
@property (nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) BOOL hidePageViewsUntilReadyToRender;
@property (nonatomic) q ignoreContentOffsetChanges;
@property (nonatomic) {CGAffineTransform=dddddd} documentTransform;
@property (nonatomic) NSString documentPassword;
@property (nonatomic) double documentScale;
@property (nonatomic) NSArray pageRects;
@property (nonatomic) BOOL readyForSnapshot;
@property (nonatomic) NSArray pageMinYs;
@property (nonatomic) NSObject<UIWebPDFViewDelegate> pdfDelegate;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} documentBounds;
@property (nonatomic) Q totalPages;
@property (nonatomic) ^{CGPDFDocument=} cgPDFDocument;
@property (nonatomic) UIPDFDocument document;
@property (nonatomic) NSData documentData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_didScroll;
- (id)documentBounds;
- (void)didRotate:;
- (void)dealloc;
- (void)_define:;
- (void)clearSelection;
- (void)didReceiveMemoryWarning:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)_share:;
- (id)document;
- (void)willRotate:;
- (void)_tapGestureRecognized:;
- (BOOL)canPerformAction:withSender:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)_translate:;
- (id)documentURL;
- (id)_selection;
- (void)didCompleteLayout;
- (void)willZoom:;
- (void)didZoom:;
- (void)willScroll:;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)resetZoom:;
- (void)zoom:to:atPoint:kind:;
- (void)annotation:wasTouchedAtPoint:controller:;
- (void)annotation:isBeingPressedAtPoint:controller:;
- (id)cgPDFDocument;
- (void)viewWillClose;
- (void)setIgnoreContentOffsetChanges:;
- (void)setPdfDelegate:;
- (unsigned long long)totalPages;
- (BOOL)_hasPageRects;
- (id)uiPDFDocument;
- (id)documentData;
- (id)initWithWebPDFViewPlaceholder:;
- (void)_removeBackgroundImageObserverIfNeeded:;
- (id)viewAtIndex:;
- (id)viewportView;
- (id)_viewportBoundsInUIVIewCoordsWithView:;
- (id)_viewportBoundsInUIViewCoords;
- (id)_viewCachingBoundsInUIViewCoords;
- (id)_installViewAtIndex:inFrame:;
- (void)_addSubViewsInViewCoordsBounds:force:;
- (id)_addPageAtIndex:;
- (void)_removePageViewsNotInViewCoordsRect:;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)ensureCorrectPagesAreInstalled:;
- (unsigned long long)firstVisiblePageNumber;
- (void)prepareForSnapshot:;
- (void)snapshotComplete;
- (BOOL)_tryToUnlockDocumentWithPassword:;
- (BOOL)_checkIfDocumentNeedsUnlock;
- (void)_recreateUIPDFDocument;
- (void)_didTouch:inRect:atPoint:linkingToURL:;
- (void)_didTouch:inRect:atPoint:linkingToPageIndex:;
- (void)_didLongPress:inRect:atPoint:linkingToURL:;
- (void)_didLongPress:inRect:atPoint:linkingToPageIndex:;
- (id)_pageWithSelection;
- (unsigned long long)_pageNumberForRect:;
- (id)imageForContactRect:onPageInViewRect:destinationRect:;
- (void)setDocumentURL:;
- (id)pdfDelegate;
- (double)initialZoomScale;
- (void)setInitialZoomScale:;
- (id)documentTransform;
- (void)setDocumentTransform:;
- (double)documentScale;
- (id)pdfPlaceHolderView;
- (void)setPdfPlaceHolderView:;
- (long long)ignoreContentOffsetChanges;
- (BOOL)hidePageViewsUntilReadyToRender;
- (void)setHidePageViewsUntilReadyToRender:;
- (id)backgroundColorForUnRenderedContent;
- (void)setBackgroundColorForUnRenderedContent:;
- (BOOL)hideActivityIndicatorForUnRenderedContent;
- (void)setHideActivityIndicatorForUnRenderedContent:;
- (id)documentPassword;
- (void)setDocumentPassword:;
- (id)pageRects;
- (void)setPageRects:;
- (BOOL)readyForSnapshot;
- (void)setReadyForSnapshot:;
- (id)pageMinYs;
- (void)setPageMinYs:;
+ (void)setAsPDFDocRepAndView;
@end
