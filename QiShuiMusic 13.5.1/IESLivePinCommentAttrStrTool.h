@interface IESLivePinCommentAttrStrTool : NSObject
+ (double)calculateAttributeHeightForAttrContent:width:;
+ (double)calculateAttributeHeightForContent:font:width:emojiParser:;
+ (long long)lastGlyphIndexForLayoutManager:textContainer:;
+ (id)parseEmojiAttributedWith:font:emojiParser:;
+ (id)truncateOriginString:ellipsisString:maxWidth:emojiParser:;
+ (id)truncateOriginString:tailString:ellipsisString:maxWidth:emojiParser:;
+ (id)truncatedRangeForLayoutManager:textContainer:;
@end
