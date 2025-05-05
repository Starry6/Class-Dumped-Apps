@interface UIPDFAnnotationParserDelegate : NSObject
@property (nonatomic) UIPDFAnnotation annotation;
@property (nonatomic) BOOL parseError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnnotation:;
- (id)annotation;
- (id)init;
- (void)dealloc;
- (void)parser:foundCharacters:;
- (void)parser:parseErrorOccurred:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void)parserDidStartDocument:;
- (BOOL)parseError;
@end
