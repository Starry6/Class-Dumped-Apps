@interface IMDCoreSpotlightBaseIndexer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)cancelIndexingForItem:;
+ (void)indexItem:withChat:isReindexing:metadataToUpdate:timingProfiler:;
+ (id)auxiliaryItemsForPrimaryAttributes:withItem:chat:isReindexing:timingProfiler:;
+ (id)indexTypeCustomKey;
+ (id)isFromMeCustomKey;
+ (id)isBusinessChatCustomKey;
+ (id)messageServiceCustomKey;
+ (id)chatUniqueIdentifierKey;
+ (id)timingProfileKey;
+ (void)startTimingWithProfiler:;
+ (void)stopTimingWithProfiler:;
@end
