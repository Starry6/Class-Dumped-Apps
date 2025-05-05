@interface WKUSDPreviewView : WKApplicationStateTrackingView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView web_contentView;
@property (nonatomic) NSData web_dataRepresentation;
@property (nonatomic) NSString web_suggestedFilename;
@property (nonatomic) BOOL web_isBackground;
- (id)provideDataForItem:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)web_isBackground;
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
- (void)thumbnailView:wantsToPresentPreviewController:forItem:;
- (void)_layoutThumbnailView;
+ (BOOL)web_requiresCustomSnapshotting;
@end
