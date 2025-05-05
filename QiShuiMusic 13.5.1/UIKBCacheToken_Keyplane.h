@interface UIKBCacheToken_Keyplane : UIKBCacheToken
- (void)setStyling:;
- (void)annotateWithInt:;
- (void)annotateWithBool:;
- (void).cxx_destruct;
- (id)styling;
- (BOOL)isUsableForCacheToken:withRenderFlags:;
- (id)stringForSplitState:handBias:;
- (void)setSize:;
- (id)size;
- (id)_initWithKeyplane:keylayout:;
+ (id)tokenForKeyplane:;
@end
