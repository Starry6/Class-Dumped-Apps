@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (id)wubiFromASCII:;
- (BOOL)isNumericWubi:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
@end
