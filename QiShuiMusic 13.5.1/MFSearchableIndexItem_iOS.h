@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preprocess;
- (BOOL)shouldExcludeFromIndex;
- (void)setNeedsAllAttributesIndexingType;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)addAttachmentAttributesToAttributeSet:;
- (BOOL)_shouldAutoDownloadAttachment:;
- (id)fetchIndexableAttachments;
+ (id)log;
+ (id)suggestionsSearchableItemWithMessage:;
+ (id)searchableIndexItemWithIdentifier:message:type:;
+ (id)searchableIndexItemsFromMessages:type:;
@end
