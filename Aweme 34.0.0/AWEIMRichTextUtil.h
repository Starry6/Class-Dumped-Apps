@interface AWEIMRichTextUtil : NSObject
+ (void)parseAttributedString:toRichTextInfosOnCompletion:;
+ (id)assembleAttributedString:withRichTextInfos:;
+ (id)highlightedAtStringWithOriginalAttributedString:richTextInfos:;
+ (id)composedRangeForAttriText:inRange:;
+ (void)parseForSavingDraftWithAttributedString:toRichTextInfosOnCompletion:;
+ (id)allowKeysForMessageExtDict;
+ (id)applyRichTextInfos:intoAttributedString:;
+ (id)highlightedComponentInfoTextWithOriginalAttributedString:richTextInfos:;
+ (void)parseAttributedString:toRichTextInfosForAttributes:onCompletion:;
+ (id)allKeysForDraft;
+ (unsigned long long)infoTypeForAttributeKey:;
+ (void)applyTextStyleInfo:intoMutableAttributedString:;
+ (void)applyAttachmentInfo:InfointoMutableAttributedString:;
+ (id)font:withWeight:;
+ (id)attributeKeyForInfoType:;
+ (id)removeComposedAttributesAtRange:forAttributedText:;
+ (id)allKeys;
@end
