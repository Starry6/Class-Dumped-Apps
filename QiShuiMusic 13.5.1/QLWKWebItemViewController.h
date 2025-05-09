@interface QLWKWebItemViewController : QLItemViewController
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) NSCache indexToThumbnailsCache;
@property (nonatomic) WKWebView webView;
@property (nonatomic) QLPreviewParts generatedDocument;
@property (nonatomic) NSURLSessionDataTask generatedDocumentURLSessionTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)printer;
- (void)setWebView:;
- (id)transitioningView;
- (void)dealloc;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)webView:startURLSchemeTask:;
- (id)operationQueue;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)scrollViewDidScroll:;
- (id)scrollView;
- (void)webView:stopURLSchemeTask:;
- (void)webView:didFailProvisionalNavigation:withError:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:;
- (void)loadView;
- (void)webView:didFailNavigation:withError:;
- (void)setOperationQueue:;
- (id)scrubView;
- (id)_renderer;
- (void)_webViewDidRequestPasswordForQuickLookDocument:;
- (unsigned long long)currentPageNumber;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canPinchToDismiss;
- (void)previewBecameFullScreen:animated:;
- (void)previewWillAppear:;
- (void)previewDidAppear:;
- (void)buttonPressedWithIdentifier:completionHandler:;
- (void)setAppearance:animated:;
- (BOOL)shouldAcceptTouch:ofGestureRecognizer:;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)transitionDidStart:;
- (void)transitionWillFinish:didComplete:;
- (void)scrubView:didSelectPageAtIndex:;
- (void)numberOfPagesWithSize:completionHandler:;
- (void)prepareForDrawingPages:ofSize:;
- (void)pdfDataForPageAtIndex:withCompletionHandler:;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:;
- (long long)numberOfPagesInScrubView:;
- (void)scrubView:thumbnailForPage:size:withCompletionBlock:;
- (id)scrubView:pageSizeAtIndex:;
- (void)_registerRemoteProxy;
- (void)_prepareThumbnailView;
- (void)_updateScrubberVisibilityAnimated:;
- (void)_updateScrubberVisibilityAnimated:reloadThumbnailsIfNeeded:;
- (void)_updateScrubberForTraitCollection:animated:reloadThumbnailsIfNeeded:;
- (void)_showScrubberIfNeeded:reloadThumbnails:;
- (void)_hideScrubberIfNeeded:;
- (void)_scrollToPage:;
- (id)_thumbnailAtIndex:;
- (void)_addThumbnailToCache:atIndex:;
- (void)_updateConstraintConstants:;
- (id)indexToThumbnailsCache;
- (void)setIndexToThumbnailsCache:;
- (id)generatedDocument;
- (void)setGeneratedDocument:;
- (id)generatedDocumentURLSessionTask;
- (void)setGeneratedDocumentURLSessionTask:;
+ (BOOL)_shouldDisableJavaScriptForContentType:;
@end
