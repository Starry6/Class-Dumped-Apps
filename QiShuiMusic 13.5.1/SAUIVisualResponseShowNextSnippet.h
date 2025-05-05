@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand
@property (nonatomic) SAUIVisualResponseSnippet visualResponse;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)visualResponse;
- (void)setVisualResponse:;
@end
