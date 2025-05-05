@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (id)punctuationMap;
- (BOOL)shouldInsertZhuyinCharacterAfter:;
- (BOOL)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
@end
