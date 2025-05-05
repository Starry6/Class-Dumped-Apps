@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
+ (id)suggestedContactNameCustomKey;
+ (id)suggestedContactPhotoCustomKey;
+ (id)groupPhotoPathCustomKey;
+ (id)_contactForURI:;
+ (id)_handleIDForHandleID:;
+ (id)_selfCSPersonFromHandleID:messageService:;
@end
