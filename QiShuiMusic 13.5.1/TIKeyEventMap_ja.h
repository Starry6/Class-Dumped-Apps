@interface TIKeyEventMap_ja : TIKeyEventMap
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
+ (BOOL)supportsSecureCoding;
+ (id)shiftOptionMap_JIS;
+ (id)optionMap_JIS;
@end
