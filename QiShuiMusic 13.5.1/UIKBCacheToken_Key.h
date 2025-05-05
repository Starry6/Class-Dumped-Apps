@interface UIKBCacheToken_Key : UIKBCacheToken
- (id)string;
- (BOOL)hasKey;
- (void)setStyling:;
- (void)setDisplayHint:;
- (void)annotateWithInt:;
- (int)rowHint;
- (id)_stringWithAdditionalValues:;
- (void)annotateWithString:;
- (id)stringForRenderFlags:lightKeyboard:;
- (void)setRowHint:;
- (void)annotateWithBool:;
- (id)_initWithKey:style:displayInsets:;
- (void).cxx_destruct;
- (id)styling;
- (void)setSize:;
- (void)resetAnnotations;
- (int)displayHint;
- (id)size;
+ (id)tokenForKey:style:;
+ (id)tokenForKey:style:displayInsets:;
@end
