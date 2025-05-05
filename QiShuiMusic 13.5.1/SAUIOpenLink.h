@interface SAUIOpenLink : SABaseClientBoundCommand
@property (nonatomic) NSURL ref;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)ref;
- (void)setRef:;
+ (id)openLink;
+ (id)openLinkWithDictionary:context:;
@end
