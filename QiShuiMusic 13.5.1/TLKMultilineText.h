@interface TLKMultilineText : TLKObject
@property (nonatomic) NSString text;
@property (nonatomic) Q maxLines;
- (void)setMaxLines:;
- (void)setText:;
- (unsigned long long)maxLines;
- (void).cxx_destruct;
- (id)description;
- (id)text;
+ (id)textWithString:;
@end
