@interface SAStructuredDictationResult : SABaseClientBoundCommand
@property (nonatomic) NSArray items;
- (id)groupIdentifier;
- (id)items;
- (BOOL)requiresResponse;
- (void)setItems:;
- (id)encodedClassName;
+ (id)structuredDictationResult;
+ (id)structuredDictationResultWithDictionary:context:;
@end
