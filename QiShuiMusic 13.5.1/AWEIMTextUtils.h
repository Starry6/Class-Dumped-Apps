@interface AWEIMTextUtils : NSObject
+ (id)textLayoutForQuoteReplyMessage:;
+ (void)linkHighlightCompanyTapped:inRange:message:atView:;
+ (void)linkHighlightTapped:inRange:message:atView:;
+ (id)textLayoutForCompany:atView:;
+ (id)textLayoutForText:atView:;
+ (id)textLayoutForText:font:atView:;
+ (id)textLayoutForText:template:atView:;
@end
