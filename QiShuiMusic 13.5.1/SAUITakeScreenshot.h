@interface SAUITakeScreenshot : SABaseClientBoundCommand
@property (nonatomic) BOOL shouldHideSiri;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)shouldHideSiri;
- (void)setShouldHideSiri:;
@end
