@interface WBSHighlightManager : NSObject
@property (nonatomic) NSArray highlights;
@property (nonatomic) BOOL isFetchingHighlights;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)highlightCenter:didRemoveHighlights:;
- (void)loadLinkMetadataForMessageWithGUID:completionHandler:;
- (void)_handleRemovalOfHighlights:;
- (void)updateAttributionViews;
- (void).cxx_destruct;
- (id)highlights;
- (void)highlightCenterDidAddHighlights:;
- (void)_enableNewSLAttributionViewAppereance;
- (void)fetchMetadataForHighlight:completionHandler:;
- (void)updateHighlightForAttributionPresenter:;
- (void)_showBannerIfNeededForPresenter:;
- (void)sendFeedbackForHighlight:withType:inPrivateBrowsing:;
- (void)_setHighlights:;
- (void)_updateHighlights;
- (void)_didFetchHighlights;
- (BOOL)isFetchingHighlights;
@end
