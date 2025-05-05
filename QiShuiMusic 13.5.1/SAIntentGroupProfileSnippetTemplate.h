@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) NSString alignment;
@property (nonatomic) NSString imageStyle;
@property (nonatomic) NSString imageURI;
@property (nonatomic) NSArray labelComponents;
- (id)groupIdentifier;
- (void)setAlignment:;
- (id)encodedClassName;
- (id)alignment;
- (id)imageStyle;
- (id)labelComponents;
- (void)setLabelComponents:;
- (void)setImageStyle:;
- (id)imageURI;
- (void)setImageURI:;
+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:context:;
@end
