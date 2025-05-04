@interface AWEIMLinkPreviewUtils : NSObject
+ (BOOL)shouldReloadViewModelWithOriginMessage:updateMessage:;
+ (void)trackLinkClickWithConversation:message:context:highlight:;
+ (id)linkPreviewExtDictOfMessage:;
+ (id)p_linkPreviewInfoOfMessage:;
+ (BOOL)hasVaildLinkVideoLocalExtDictOfMessage:;
+ (id)linkArrayWithMessage:;
+ (id)textContentWithMessage:;
+ (id)linkVideoItemIdOfMessage:;
+ (BOOL)shouldShowLinkVideoCoverOfMessage:;
@end
