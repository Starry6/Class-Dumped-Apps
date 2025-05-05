@interface SAClockSnippet : SAUISnippet
@property (nonatomic) NSArray clocks;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)clocks;
- (void)setClocks:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
