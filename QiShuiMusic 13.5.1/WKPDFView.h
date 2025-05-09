@interface WKPDFView : WKApplicationStateTrackingView
@property (nonatomic) BOOL _wk_printFormatterRequiresMainThread;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UITextRange selectedTextRange;
@property (nonatomic) BOOL supportsTextReplacement;
@property (nonatomic) <NSObject><NSCopying> selectedTextSearchDocument;
@property (nonatomic) UIView web_contentView;
@property (nonatomic) NSData web_dataRepresentation;
@property (nonatomic) NSString web_suggestedFilename;
@property (nonatomic) BOOL web_isBackground;
- (BOOL)_wk_printFormatterRequiresMainThread;
- (void)actionSheetAssistant:shareElementWithURL:rect:;
- (void)actionSheetAssistant:performAction:;
- (id)actionSheetAssistant:decideActionsForElement:defaultActions:;
- (void)decorateFoundTextRange:inDocument:usingStyle:;
- (void)_wk_requestDocumentForPrintFormatter:;
- (void)dealloc;
- (void)actionSheetAssistant:openElementAtLocation:;
- (long long)compareFoundRange:toRange:inDocument:;
- (void)shareSheetDidDismiss:;
- (id)dataDetectionContextForActionSheetAssistant:positionInformation:;
- (id)_contentView;
- (BOOL)actionSheetAssistant:shouldIncludeAppLinkActionsForElement:;
- (unsigned long long)_wk_pageCountForPrintFormatter:;
- (void)clearAllDecoratedFoundText;
- (id)selectedTextRange;
- (id)positionInformationForActionSheetAssistant:;
- (void).cxx_destruct;
- (void)performTextSearchWithQueryString:usingOptions:resultAggregator:;
- (BOOL)gestureRecognizerShouldBegin:;
- (id).cxx_construct;
- (BOOL)web_isBackground;
- (BOOL)web_handleKeyEvent:;
- (void)web_scrollViewWillBeginZooming:withView:;
- (void)web_scrollViewDidScroll:;
- (void)web_scrollViewDidZoom:;
- (void)web_scrollViewDidEndZooming:withView:atScale:;
- (void)web_beginAnimatedResizeWithUpdates:;
- (void)pdfHostViewController:updatePageCount:;
- (void)pdfHostViewController:documentDidUnlockWithPassword:;
- (void)pdfHostViewController:findStringUpdate:done:;
- (void)pdfHostViewController:goToURL:;
- (void)pdfHostViewController:goToPageIndex:withViewFrustum:;
- (void)pdfHostViewController:didLongPressURL:atLocation:withAnnotationRect:;
- (void)pdfHostViewController:didLongPressPageIndex:atLocation:withAnnotationRect:;
- (void)pdfHostViewControllerExtensionProcessDidCrash:;
- (id)web_initWithFrame:webView:mimeType:;
- (void)web_setContentProviderData:suggestedFilename:;
- (void)web_setMinimumSize:;
- (void)web_setOverlaidAccessoryViewsInset:;
- (void)web_computedContentInsetDidChange;
- (void)web_setFixedOverlayView:;
- (void)web_didSameDocumentNavigation:;
- (void)web_countStringMatches:options:maxCount:;
- (void)web_findString:options:maxCount:;
- (void)web_hideFindUI;
- (id)web_contentView;
- (void)web_snapshotRectInContentViewCoordinates:snapshotWidth:completionHandler:;
- (id)web_dataRepresentation;
- (id)web_suggestedFilename;
- (id)_offsetForPageNumberIndicator;
- (void)_movePageNumberIndicatorToPoint:animated:;
- (void)_updateLayoutAnimated:;
- (void)_scrollToURLFragment:;
- (void)_resetFind;
- (void)_findString:withOptions:maxCount:completion:;
- (BOOL)_computeFocusedSearchResultIndexWithOptions:didWrapAround:;
- (void)_focusOnSearchResultWithOptions:;
- (id)_URLWithPageIndex:;
- (void)_goToURL:atLocation:;
- (void)_showActionSheetForURL:atLocation:withAnnotationRect:;
- (id)_ensureDocumentForPrinting;
+ (BOOL)web_requiresCustomSnapshotting;
@end
