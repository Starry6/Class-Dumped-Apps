@interface DOMImplementation : DOMObject
- (void)dealloc;
- (BOOL)hasFeature:version:;
- (id)createDocumentType:publicId:systemId:;
- (id)createDocument:qualifiedName:doctype:;
- (id)createCSSStyleSheet:media:;
- (id)createHTMLDocument:;
- (BOOL)hasFeature::;
- (id)createDocumentType:::;
- (id)createDocument:::;
- (id)createCSSStyleSheet::;
@end
