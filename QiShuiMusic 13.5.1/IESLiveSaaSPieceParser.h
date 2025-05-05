@interface IESLiveSaaSPieceParser : NSObject
@property (nonatomic) NSParagraphStyle paragraphStyle;
@property (nonatomic) IESLiveSaaSBadgeFactory badgeFactory;
@property (nonatomic) IESLiveSaaSEmojiTextParser emoticonParser;
- (id)handleHeartPiece:configuration:;
- (void)appendBadgeListIn:withBadgeList:rangeNum:rangeWidth:rangeHeight:;
- (id)attributesWith:preferColor:;
- (id)attributesWith:preferColor:config:;
- (id)badgeFactory;
- (id)emoticonParser;
- (id)getDiggImageWithColorString:;
- (double)getFinalFontSizeWith:config:;
- (double)getFontSize;
- (id)handleGiftPiece:defaultFormat:configuration:;
- (id)handleImagePiece:defaultFormat:configuration:;
- (id)handlePatternPiece:defaultFormat:configuration:;
- (id)handleStringPiece:defaultFormat:configuration:;
- (id)handleUserPiece:defaultFormat:configuration:;
- (id)initWithDIContext:;
- (void)setBadgeFactory:;
- (void)setEmoticonParser:;
- (id)init;
- (id)paragraphStyle;
- (void).cxx_destruct;
- (void)setParagraphStyle:;
@end
