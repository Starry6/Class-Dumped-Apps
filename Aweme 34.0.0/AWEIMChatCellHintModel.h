@interface AWEIMChatCellHintModel : NSObject
@property (nonatomic) Q hintType;
@property (nonatomic) AWEIMChatCellHintTypeConfigModel hintTypeConfig;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) NSAttributedString rawAttributedStringBeforeMatchEmoji;
@property (nonatomic) AWEIMChatCellHighlightHintConfig highlightHintConfig;
- (id)highlightHintConfig;
- (id)initWithHintType:hitContent:;
- (unsigned long long)hintType;
- (id)initWithHintType:content:;
- (id)rawAttributedStringBeforeMatchEmoji;
- (void)setHintType:;
- (id)hintTypeConfig;
- (void)setRawAttributedStringBeforeMatchEmoji:;
- (void)setHintTypeConfig:;
- (unsigned long long)hash;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
