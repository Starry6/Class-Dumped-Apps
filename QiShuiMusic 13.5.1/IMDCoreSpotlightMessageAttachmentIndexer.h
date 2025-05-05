@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
+ (id)auxiliaryItemsForPrimaryAttributes:withItem:chat:isReindexing:timingProfiler:;
+ (id)attachmentIndexTypeForPath:filename:isSticker:isCommSafetySensitive:;
+ (BOOL)_attachmentIsSticker:;
+ (BOOL)messageSupportsIndexingForItem:;
+ (id)_possibleVideoComplementExtensions;
+ (id)videoComplementPathForResourceURL:;
+ (unsigned long long)partKeyForAttachmentFromItem:withGUID:;
+ (id)attachmentRecordsFromAttachments:;
+ (id)attachmentIsSyndicatableMediaKey;
+ (id)livePhotoComplementKey;
+ (id)momentShareURLKey;
+ (id)assetUUIDKey;
@end
