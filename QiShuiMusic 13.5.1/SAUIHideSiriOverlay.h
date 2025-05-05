@interface SAUIHideSiriOverlay : SABaseClientBoundCommand
@property (nonatomic) BOOL hideSnippets;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)hideSnippets;
- (void)setHideSnippets:;
+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:context:;
@end
