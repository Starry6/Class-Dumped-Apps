@interface WBSOpenSearchDescription : NSObject
@property (nonatomic) NSString descriptionDocumentURLString;
@property (nonatomic) WBSOpenSearchURLTemplate searchURLTemplate;
@property (nonatomic) WBSOpenSearchURLTemplate urlTemplateForSuggestionsInJSON;
@property (nonatomic) WBSOpenSearchURLTemplate urlTemplateForSuggestionsInXML;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithDescriptionDocumentURLString:searchURLTemplate:urlTemplateForSuggestionsInJSON:urlTemplateForSuggestionsInXML:;
- (id)descriptionDocumentURLString;
- (id)searchURLTemplate;
- (id)urlTemplateForSuggestionsInJSON;
- (id)urlTemplateForSuggestionsInXML;
@end
