@interface SAUIVisualResponseSnippet : SAUISnippet
@property (nonatomic) NSData modelData;
@property (nonatomic) NSString viewIdentifier;
- (id)groupIdentifier;
- (id)modelData;
- (id)encodedClassName;
- (id)viewIdentifier;
- (void)setModelData:;
- (void)setViewIdentifier:;
@end
