@interface UITableViewLabel : UILabel
@property (nonatomic) UITableViewCell tableCell;
@property (nonatomic) BOOL usingDefaultFont;
- (void)setTableCell:;
- (void)setAttributedText:;
- (void)_cleanupErrantFirstLineHeadIndent;
- (void)setText:;
- (id)_disabledFontColor;
- (void)_setFirstParagraphFirstLineHeadIndent:;
- (void)setFont:;
- (BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)tableCell;
- (void)_setDefaultFont:;
- (void).cxx_destruct;
- (void)_restoreNumberOfLines;
- (BOOL)usingDefaultFont;
- (void)_clearNumberOfLines;
@end
