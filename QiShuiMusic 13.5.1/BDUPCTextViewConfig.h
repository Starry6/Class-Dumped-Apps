@interface BDUPCTextViewConfig : BDUPCViewConfig
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSMutableParagraphStyle paragraphStyle;
@property (nonatomic) NSDictionary hyperlinks;
@property (nonatomic) UIColor hyperlinkColor;
- (id)hyperlinkColor;
- (void)setHyperlinkColor:;
- (void)setHyperlinks:;
- (void)setText:;
- (void)setFont:;
- (void)setTextColor:;
- (id)paragraphStyle;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (id)text;
- (void)setParagraphStyle:;
- (id)hyperlinks;
@end
