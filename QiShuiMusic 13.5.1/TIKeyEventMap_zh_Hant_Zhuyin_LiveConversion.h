@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : TIKeyEventMap_zh_Hant_Zhuyin
- (long long)candidateNumberKey:;
- (BOOL)shouldInsertZhuyinCharacterAfter:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
@end
