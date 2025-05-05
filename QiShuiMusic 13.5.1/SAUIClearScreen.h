@interface SAUIClearScreen : SABaseClientBoundCommand
@property (nonatomic) SAAceView initialView;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initialView;
- (void)setInitialView:;
+ (id)clearScreen;
+ (id)clearScreenWithDictionary:context:;
@end
