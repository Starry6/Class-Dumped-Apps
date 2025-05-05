@interface UITextViewPrintFormatter : UIViewPrintFormatter
- (id)_textView;
- (void)setAttributedText:;
- (void)setColor:;
- (void)setText:;
- (void)setFont:;
- (id)color;
- (void).cxx_destruct;
- (id)font;
- (long long)textAlignment;
- (void)setTextAlignment:;
- (id)attributedText;
- (id)text;
- (long long)_recalcPageCount;
- (id)rectForPageAtIndex:;
- (void)drawInRect:forPageAtIndex:;
- (id)_pageData;
@end
