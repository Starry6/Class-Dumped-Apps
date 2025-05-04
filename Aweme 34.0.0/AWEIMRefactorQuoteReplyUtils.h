@interface AWEIMRefactorQuoteReplyUtils : NSObject
+ (BOOL)quotedContentIsAvailableWithOriginMsg:;
+ (id)quotedInvisibleStringWithOriginMsg:;
+ (BOOL)disableQuoteReplyForMessage:conversation:;
+ (BOOL)isFeedExternalRefMessage:;
+ (BOOL)currentMsgType:canQuoteReplyType:;
+ (BOOL)enableShowDetailStyleQuoteReply:;
+ (BOOL)isFeedReplyFakeQuote:;
+ (BOOL)currentMsgType:canQuoteReplyType:quoteMessage:;
+ (BOOL)canBeQuotedReplyWithType:;
+ (BOOL)canShowQuoteReply:;
+ (BOOL)p_canShowExternalRefMessage:;
+ (BOOL)isRedpacketMessage:;
+ (BOOL)isMostFrequentlyUsedMsgType:;
+ (BOOL)isUnavailableDuoshanMessage:;
@end
