@interface IMDCoreSpotlightMessageMetadataIndexer : IMDCoreSpotlightBaseIndexer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)cancelIndexingForItem:;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
@end
