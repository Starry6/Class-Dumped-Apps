@interface CPPDFAnnotationParserDelegate : NSObject
@property (nonatomic) BOOL parseError;
@property (nonatomic) ^{__CFDictionary=} annotationDictionary;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) ^{__CFString=} annotationId;
@property (nonatomic) ^{__CFString=} otherId;
@property (nonatomic) ^{__CFString=} content;
@property (nonatomic) ^{CGColor=} color;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)content;
- (id)rect;
- (id)init;
- (void)dealloc;
- (void)parser:foundCharacters:;
- (void)parser:parseErrorOccurred:;
- (id)color;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void)parserDidStartDocument:;
- (BOOL)parseError;
- (void)addQuadpoints;
- (id)annotationDictionary;
- (void)setAnnotationDictionary:;
- (id)annotationId;
- (id)otherId;
@end
