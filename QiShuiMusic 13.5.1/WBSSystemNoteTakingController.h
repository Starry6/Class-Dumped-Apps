@interface WBSSystemNoteTakingController : NSObject
@property (nonatomic) BOOL systemNoteTakingEnabledForSafari;
@property (nonatomic) <WBSSystemNoteTakingControllerDelegate> delegate;
@property (nonatomic) BOOL isNotesPIPVisible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (BOOL)_isSystemNoteTakingEnabledForSafari;
- (id)delegate;
- (void).cxx_destruct;
- (void)userWillAddLinkWithActivity:completion:;
- (void)saveHighlightsData:selectedText:selectedImage:newGroup:originatedInApp:webView:userActivity:;
- (void)applyHighlightInUserActivity:webView:;
- (void)fetchHighlightsForUserActivity:privateBrowsing:completion:;
- (BOOL)_isSystemNoteTakingEnabled;
- (void)_insertLinkContextInfo:userActivity:;
- (void)_insertLinkContextPreview:userActivity:;
- (void)insertCanonicalURLIfAvailableForUserActivity:;
- (void)cacheCanonicalURL:forWebPageURL:;
- (id)userActivityForNoteTaking:;
- (BOOL)isNoteTakingSupportedWithPrivateBrowsing:;
- (void)_setUpNotesVisibilityObserver;
- (void)_updateNotesPIPVisibility:;
- (BOOL)isNotesPIPVisible;
@end
