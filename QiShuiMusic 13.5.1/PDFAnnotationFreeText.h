@interface PDFAnnotationFreeText : PDFAnnotation
- (void)setAlignment:;
- (void)commonInit;
- (void)setFont:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)font;
- (long long)alignment;
- (id)copyWithZone:;
- (id)fontColor;
- (void)setFontColor:;
- (id)initWithAnnotationDictionary:forPage:;
- (id)commonCreateDictionaryRef;
- (void)drawWithBox:inContext:;
@end
