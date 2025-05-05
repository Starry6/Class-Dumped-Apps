@interface OBTemplateLabel : UILabel
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString symbolName;
- (id)symbolName;
- (id)init;
- (void)setText:;
- (void)setSymbolName:;
- (void)traitCollectionDidChange:;
- (id)displayText;
- (void).cxx_destruct;
- (void)setDisplayText:;
- (void)updateTextAlignment;
- (void)setTitleTrailingSymbol:;
@end
