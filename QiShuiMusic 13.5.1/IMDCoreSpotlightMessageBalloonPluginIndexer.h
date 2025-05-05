@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
+ (id)lpDescriptionCustomKey;
+ (id)lpTitleCustomKey;
+ (id)_newSummaryTextForPayloadData:item:;
+ (id)_pluginPayloadAttachmentPathsForItem:;
+ (BOOL)_richLinkPluginHasRichContentForItem:attachmentPaths:originalURL:outURL:outTitle:;
+ (id)lpHasRichMediaCustomKey;
+ (id)lpPluginPathsCustomKey;
@end
