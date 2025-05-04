@interface AWEIMChatCellHintAttributedStringUtil : NSObject
+ (id)hintAttributedStringWithContext:;
+ (id)hintAttributedStringWithHighlightBoldPart:weight:;
+ (id)p_getPrefixAttributedStringWithPrefixString:prefixStringFont:disableHighLight:;
+ (id)hintAttributedStringWithBoldPart:weight:;
+ (id)hintSmallerAttributedStringWithBoldPart:weight:;
@end
