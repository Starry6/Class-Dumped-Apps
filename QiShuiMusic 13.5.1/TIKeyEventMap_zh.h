@interface TIKeyEventMap_zh : TIKeyEventMap
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (id)punctuationMap;
- (BOOL)isURLOrEmailKeyboardInKeyboardState:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
+ (id)punctuationMap_zh_Hans;
+ (id)punctuationMap_zh_Hant;
@end
