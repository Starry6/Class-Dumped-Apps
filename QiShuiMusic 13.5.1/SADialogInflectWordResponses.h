@interface SADialogInflectWordResponses : SABaseClientBoundCommand
@property (nonatomic) NSArray inflectWordResponses;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)inflectWordResponses;
- (void)setInflectWordResponses:;
+ (id)inflectWordResponses;
+ (id)inflectWordResponsesWithDictionary:context:;
@end
