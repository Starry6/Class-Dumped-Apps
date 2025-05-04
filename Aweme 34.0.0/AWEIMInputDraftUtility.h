@interface AWEIMInputDraftUtility : NSObject
+ (id)inputTextDraftOfConversation:;
+ (id)saveInputTextToDraftWithTextView:quoteReplyMessageID:customQuoteInfo:forConversation:;
+ (id)getInputDraftForConversation:;
@end
