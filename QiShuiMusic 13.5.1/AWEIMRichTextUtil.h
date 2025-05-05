@interface AWEIMRichTextUtil : NSObject
+ (id)assembleAttributedString:withRichTextInfos:;
+ (void)assembleMutableAttributedString:withTextStyleInfo:;
+ (id)attributeKeyForInfoType:;
+ (id)composedRangeForAttriText:inRange:;
+ (id)font:withWeight:;
+ (unsigned long long)infoTypeForAttributeKey:;
+ (void)parseAttributedString:toRichTextInfosForAttributes:onCompletion:;
+ (void)parseAttributedString:toRichTextInfosOnCompletion:;
+ (id)removeComposedAttributesAtRange:forAttributedText:;
+ (id)allKeys;
@end
