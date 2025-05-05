@interface AWEIMFansGroupWelcomeMessage : AWEIMMessage
@property (nonatomic) NSAttributedString contentAttributedString;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) NSDictionary contentAttributes;
@property (nonatomic) @? welcomeSetClickBlock;
- (id)attributedContent;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setWelcomeSetClickBlock:;
- (id)welcomeSetClickBlock;
- (id)contentAttributes;
- (void)setContentAttributes:;
- (double)fontSize;
- (void).cxx_destruct;
- (id)contentSize;
- (id)messageSize;
- (id)style;
- (void)setContentSize:;
- (id)contentAttributedString;
- (void)setContentAttributedString:;
@end
