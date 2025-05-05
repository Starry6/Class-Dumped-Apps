@interface WBSSiriIntelligenceDonor : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)donateTextInWebView:extractedReaderText:canDonateFullPageText:extractInnerText:;
- (void)donateDataForPageWithURL:fullPageText:readerText:;
- (void)_donateDataForPageWithURL:fullPageText:readerText:autocompleteTriggers:;
- (void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:;
- (void)donateSafariBookmarksToCoreSpotlight:;
- (id)_searchableItemsForIDs:allBookmarks:;
- (void)_indexCoreSpotlightData:completionHandler:;
- (void)_removeCoreSpotlightDataWithIDs:completionHandler:;
- (void)processRemovedHistoryItems:;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafari;
- (void)_indexHistoryItemsToCoreSpotlight:completionHandler:;
- (id)_contentDescriptionForURL:;
- (id)_indexedBookmarksIDs:;
- (void)_computeCoreSpotlightIDsForBookmarks:;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:indexedBookmarksIDs:outIndexIDs:outRemoveIDs:;
- (void)_sanitizeAttributeSet:;
+ (id)sharedInstance;
+ (id)coreSpotlightPageDonationIdentifier;
+ (id)historyItemIdentifierForURL:;
+ (id)_historyItemIdentifierForURLString:;
+ (id)_bookmarkItemIdentifierForURLString:;
+ (id)_coreSpotlightItemIdentifierForURLString:;
@end
