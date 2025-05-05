@interface TLKFormattedText : TLKFormattedTextItem
@property (nonatomic) q verticalTextAlignment;
@property (nonatomic) q encapsulationStyle;
@property (nonatomic) NSString string;
@property (nonatomic) Q maxLines;
- (void)setMaxLines:;
- (id)string;
- (void)setString:;
- (BOOL)hasContent;
- (unsigned long long)maxLines;
- (void)setVerticalTextAlignment:;
- (void)setEncapsulationStyle:;
- (long long)encapsulationStyle;
- (void).cxx_destruct;
- (id)description;
- (long long)verticalTextAlignment;
+ (id)formattedTextWithString:;
@end
