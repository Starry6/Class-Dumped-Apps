@interface UITextLabel : UILabel
- (void)drawRect:;
- (void)setAlignment:;
- (void)setColor:;
- (float)minFontSize;
- (id)color;
- (void)setMinFontSize:;
- (long long)alignment;
- (void)setCentersHorizontally:;
- (BOOL)centersHorizontally;
- (id)ellipsizedTextSize;
- (void)setHighlightedColor:;
- (id)highlightedColor;
- (void)setWrapsText:;
- (BOOL)wrapsText;
- (void)setTextAutoresizesToFit:;
- (BOOL)textAutoresizesToFit;
@end
