@interface SAUIShowHelp : SABaseClientBoundCommand
@property (nonatomic) NSString speakableText;
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)text;
- (void)setSpeakableText:;
- (id)speakableText;
+ (id)showHelp;
+ (id)showHelpWithDictionary:context:;
@end
