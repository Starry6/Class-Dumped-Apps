@interface MFMessageContentRequest : NSObject
- (void).cxx_destruct;
- (id)delegateWithErrorHandler:;
- (id)beginRequestWithCompletionHandler:;
- (id)requestRawRepresentationWithCompletionHandler:;
- (id)_dataHolderWithCancelationToken:;
- (id)_generateRepresentationForLoadingContext:existingRepresentation:completion:;
- (id)requestHTMLRepresentationWithCompletionHandler:;
- (id)_processContentLoadingContextEvent:;
- (id)_contentRepresentationForLoadingEvent:existingRepresentation:;
- (id)_contentRepresentationForEvent:contentURL:relatedItems:existingRepresentation:invocable:;
- (void)_includeSuggestionItemsIfNeededForRepresentation:message:;
- (void)_includeCachedMetadataJSONIfNeededForRepresentation:message:;
- (void)_includeHeadersIfNeededForRepresentation:message:options:;
- (id)_messageForLegacyMessage:;
- (id)_requestContentForAttachment:manager:options:managed:completion:;
- (id)_contentItemForAttachment:manager:managed:;
- (id)_attachmentContentItemsForMailDropNodes:withContext:;
- (id)_maildropMetadataFromContext:;
- (id)_attachmentForMailDropMetaData:context:;
+ (id)onScheduler:requestContentForObjectID:messagePersistence:legacyMessage:messageTransformer:mailDropAttachmentGenerator:listUnsubscribeHandler:clientIdentifier:options:delegate:completionHandler:;
+ (id)onScheduler:requestID:requestContentForObjectID:messagePersistence:legacyMessage:messageTransformer:mailDropAttachmentGenerator:listUnsubscribeHandler:clientIdentifier:options:delegate:completionHandler:;
+ (id)metadataWithDictionary:;
@end
