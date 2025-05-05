@interface TIKeyEventMapTransliteration : TIKeyEventMap
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (id)avagrahaString;
+ (BOOL)supportsSecureCoding;
@end
