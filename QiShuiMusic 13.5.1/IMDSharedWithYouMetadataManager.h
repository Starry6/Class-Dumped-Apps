@interface IMDSharedWithYouMetadataManager : NSObject
- (id)_uniqueIdentifierForResourceURL:;
- (id)_pluginPayloadAttachmentPathsForItem:;
- (id)updateAttributesWithSharedWithYouMetadata:withItem:chat:;
- (id)_updateAttributesWithCollaborationMetadata:withItem:chat:shouldAddSharedWithYouMetadata:;
- (BOOL)chatDictionary:matchesFaceTimeConversation:;
- (void)updateConversationManagerWithItem:chat:attributes:;
- (id)highlightDictionaryFromAttributes:withItem:chat:;
- (BOOL)_isLNKTypeMessage:;
- (BOOL)_isAttachmentType:;
- (id)titleFromLPLinkMetadata:;
- (id)_lpLinkMetadataForItem:attachmentPaths:originalURL:;
- (id)_indexTypeCustomKey;
- (id)_highlightedContentServerDateKey;
- (id)_syndicationContentTypeKey;
- (id)_collaborationIdentifierKey;
- (id)_ckBundleIDsKey;
- (id)_lpTitleCustomKey;
+ (id)Sha256ForData:withSalt:;
+ (Class)LPSharedObjectMetadataClass;
+ (Class)LPSpecializationMetadataClass;
+ (id)tuManagerQueue;
+ (id)collaborationMetadataKey;
@end
