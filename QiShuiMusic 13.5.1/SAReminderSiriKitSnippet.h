@interface SAReminderSiriKitSnippet : SAUISnippet
@property (nonatomic) NSArray interactions;
- (id)groupIdentifier;
- (id)interactions;
- (id)encodedClassName;
- (void)setInteractions:;
+ (id)siriKitSnippet;
+ (id)siriKitSnippetWithDictionary:context:;
@end
