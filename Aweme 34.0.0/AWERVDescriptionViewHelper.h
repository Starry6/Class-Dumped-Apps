@interface AWERVDescriptionViewHelper : NSObject
+ (void)matchEmoticonForAttributedString:;
+ (void)transferToProfileWithURL:userModel:;
+ (id)matchEmoticonToAccessibilityLabel:;
+ (id)highlightFont;
+ (id)accessibilityValue:withRange:;
+ (void)trackChallengTitleShow:withHashTagId:withGroupId:referString:;
+ (void)trackEntherPersonalDetailWithModel:referString:;
+ (void)trackEntityWordClick:referString:keyWord:params:;
+ (id)getAttributedTextWithModel:referString:textColor:entityWordLongPressHihglightColor:entityWordHighlightColor:highlightColor:context:;
+ (id)configAttributedContentTextWithModel:referString:entitySearchWords:textColor:entityWordLongPressHihglightColor:entityWordHighlightColor:highlightColor:context:;
+ (id)contentTextStringWithModel:context:;
+ (void)linkHighlightTapped:inRange:model:referString:entitySearchWords:;
+ (id)addTextExtrasForAttributedContentText:content:model:entitySearchWords:textExtras:referString:textColor:entityWordLongPressHihglightColor:entityWordHighlightColor:highlightColor:tapHighlightAction:;
+ (void)insertImageCommentPublishPerfixIfNeededWithAttributedString:model:textColor:entityWordHighlightColor:highlightColor:tapHighlightAction:;
+ (void)updateEntityWordUIStyle:withRange:model:textExtras:extra:entityWordHighlightColor:;
+ (void)applyHighlightForAttributedContentText:range:hightlightId:hightlightType:extra:isCommerce:entityWordLongPressHihglightColor:entityWordHighlightColor:highlightColor:tapHighlightAction:;
+ (void)trackChallengTitleClick:withHashTagId:withGroupId:referString:;
+ (void)trackEnterTagDetailWithTagId:hashTag:model:referString:;
+ (void)drawSearchUnderline:withRange:extra:entityWordHighlightColor:;
+ (void)drawSearchIconSuffix:withRange:extra:entityWordHighlightColor:;
+ (id)bodyFont;
+ (void)addParagraphStyle:;
@end
