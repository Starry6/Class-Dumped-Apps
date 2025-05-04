@interface AWEIMChatCellHintAttributedStringCreationContext : NSObject
@property (nonatomic) NSString prefixString;
@property (nonatomic) UIFont prefixStringFont;
@property (nonatomic) BOOL disableHighLight;
@property (nonatomic) NSString splicedString;
@property (nonatomic) UIFont splicedStringFont;
@property (nonatomic) NSAttributedString splicedAttributedString;
- (void)setDisableHighLight:;
- (id)initWithPrefixString:splicedAttributedString:;
- (id)initWithPrefixString:;
- (id)initWithPrefixString:splicedString:;
- (void)setSplicedAttributedString:;
- (void)setSplicedString:;
- (id)prefixStringFont;
- (void)setPrefixStringFont:;
- (BOOL)disableHighLight;
- (id)splicedString;
- (id)splicedStringFont;
- (void)setSplicedStringFont:;
- (id)splicedAttributedString;
- (void).cxx_destruct;
- (id)prefixString;
- (void)setPrefixString:;
@end
