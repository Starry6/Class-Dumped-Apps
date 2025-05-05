@interface SAPhoneCallSnippet : SAUISnippet
@property (nonatomic) NSArray calls;
- (id)groupIdentifier;
- (void)setCalls:;
- (id)encodedClassName;
- (id)calls;
+ (id)callSnippet;
+ (id)callSnippetWithDictionary:context:;
@end
