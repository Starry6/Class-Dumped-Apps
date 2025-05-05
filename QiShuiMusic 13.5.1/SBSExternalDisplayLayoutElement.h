@interface SBSExternalDisplayLayoutElement : FBSDisplayLayoutElement
- (id)succinctDescriptionBuilder;
- (BOOL)sb_isExternalDisplayElement;
- (BOOL)sb_isPresenting;
+ (id)elementWithIdentifier:presenting:;
@end
