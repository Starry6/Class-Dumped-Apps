@interface UIKBRenderFactory_CarLinear : UIKBRenderFactory_Car
- (void)setupLayoutSegments;
- (id)_traitsForKey:onKeyplane:;
- (id)lightTextFontName;
- (double)defaultKeyFontSize;
- (double)carKeyRadius;
- (double)letterLineFontSize;
- (double)activeLetterFontSize;
@end
