@interface AWESearchCardCommentContentViewModel : NSObject
+ (id)defaultAvatarImage;
+ (BOOL)enableReplaceImageTextColor;
+ (id)avatarImageWithColor:;
+ (double)preCaculateLayoutForComment:width:maximumNumberOfRows:;
+ (double)commentWidthWithCellWidth:comment:;
+ (BOOL)likeLabelTooLong:;
+ (id)displayAttributeContentForComment:lighlightLinkTapAction:;
+ (id)generateCommentText:;
+ (void)addBasicTextAttributeForContentString:;
+ (void)addTextExtrasForAttrCommentContent:commentModel:tapHighlightAction:;
+ (void)addEmotionIconForAttrCommentContent:Type:;
+ (void)addImageLabelForAttrCommentContent:commentModel:tapHighlightAction:;
+ (void)addGifTagLabelForAttrCommentContent:commentModel:tapHighlightAction:;
+ (void)addParagraphStyleForContentString:;
+ (id)attributedContentForPreCalculateWithComment:;
+ (void)appendSearchIconWithComment:attrComment:;
+ (void)appendImageStickerWithComment:attrComment:;
+ (id)imageStickerSizeWithType:comment:;
+ (void)replaceWithIconCommentContent:range:highlightText:iconSize:iconHorizontalPosition:iconVerticalPosition:;
+ (void)drawSuffixForSearchTextContent:withRange:extra:;
+ (id)tagLabelViewWithType:comment:;
+ (id)likeLabelTextRealsize:maxWidth:;
@end
