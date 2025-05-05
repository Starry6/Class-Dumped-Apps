@interface SASmsSnippet : SAUISnippet
@property (nonatomic) NSArray smss;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)smss;
- (void)setSmss:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
