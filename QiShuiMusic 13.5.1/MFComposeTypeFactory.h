@interface MFComposeTypeFactory : NSObject
+ (void)_prependQuotedMarkup:shouldIndent:toBodyField:;
+ (id)_markupStringForExcludedInlineAttachmentWithFilename:;
+ (id)_markupForInlineAttachment:willBeIncluded:prependBlankLine:delegate:;
+ (void)_setContent:includeAttachments:shouldQuote:prependBlankLine:delegate:;
+ (void)_setContent:includeAttachments:shouldQuote:prependBlankLine:delegate:storeOriginalAttachments:;
+ (void)_quoteFromModel:delegate:;
+ (id)headersFromDelegate:;
+ (id)headersFromDelegate:originatingBundleID:sourceAccountManagement:;
+ (void)_sanitizeRecipientsForComposeType:sendingAddress:delegate:;
+ (BOOL)alwaysBCCSelf;
+ (id)bccSelfAddressForDelegate:;
+ (void)_mergeModel:withDelegate:;
+ (void)_updateDelegate:toRecipients:ccRecipients:bccRecipients:;
+ (void)_setupForReplyWithModel:delegate:;
+ (void)_setupForForwardWithModel:delegate:;
+ (void)_setupForReplyAllWithModel:delegate:;
+ (void)setupSwitchToReplyAllWithModel:delegate:;
+ (void)setupSwitchToReplyWithModel:delegate:;
+ (void)_setupForNewMessageWithModel:delegate:;
+ (void)addAttachment:prepend:withCompositionModel:delegate:;
+ (unsigned long long)imageScaleFromUserDefaults;
+ (void)setupWithCompositionModel:delegate:;
+ (void)setupWithContent:delegate:;
+ (id)messageFromDelegate:withSubstituteDOMDocument:compositionSpecification:originatingBundleID:sourceAccountManagement:writeAttachmentPlaceholders:;
+ (id)messageFromDelegate:originatingBundleID:sourceAccountManagement:;
+ (void)hijackThreadFromDelegate:;
+ (id)subjectFromSubject:withComposeType:;
@end
