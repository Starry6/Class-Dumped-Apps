@interface IMDCoreSpotlightMessageSubjectIndexer : IMDCoreSpotlightBaseIndexer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
@end
