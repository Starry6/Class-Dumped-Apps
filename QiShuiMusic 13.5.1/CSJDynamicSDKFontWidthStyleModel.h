@interface CSJDynamicSDKFontWidthStyleModel : NSObject
@property (nonatomic) NSString fontFamily;
@property (nonatomic) q fontSize;
@property (nonatomic) q fontWeight;
@property (nonatomic) q letterSpacing;
@property (nonatomic) q lineHeight;
@property (nonatomic) double maxWidth;
- (id)csj_dictionaryValue;
- (void)setFontWeight:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (long long)fontWeight;
- (long long)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (long long)lineHeight;
- (void)setLineHeight:;
- (id)fontFamily;
- (void)setFontFamily:;
- (long long)letterSpacing;
- (void)setLetterSpacing:;
@end
