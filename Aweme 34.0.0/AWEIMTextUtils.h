@interface AWEIMTextUtils : NSObject
+ (void)linkHighlightTapped:inRange:message:atView:;
+ (id)textLayoutForQuoteReplyMessage:;
+ (id)textLayoutForText:template:atView:;
+ (void)linkHighlightCompanyTapped:inRange:message:conversation:atView:;
+ (id)textLayoutForText:atView:;
+ (void)linkTappedWithContent:;
+ (void)linkHighlightTapped:inRange:message:atView:btmToken:;
+ (id)textLayoutForText:font:atView:;
+ (void)linkHighlightCompanyTapped:inRange:message:atView:;
@end
