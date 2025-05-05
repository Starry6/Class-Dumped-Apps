@interface SACardShowNextCard : SABaseClientBoundCommand
@property (nonatomic) SACardSnippet cardSnippet;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)cardSnippet;
- (void)setCardSnippet:;
+ (id)showNextCard;
+ (id)showNextCardWithDictionary:context:;
@end
