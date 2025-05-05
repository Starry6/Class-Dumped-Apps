@interface UIPDFParserDelegate : NSObject
@property (nonatomic) ^{CGPath=} path;
@property (nonatomic) BOOL parserError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)path;
- (id)init;
- (void)dealloc;
- (void)parser:parseErrorOccurred:;
- (BOOL)parserError;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void)parserDidStartDocument:;
@end
