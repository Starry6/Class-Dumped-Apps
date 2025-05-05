@interface RUIXMLParserDelegate : NSObject
@property (nonatomic) RUIXMLElement xmlElement;
- (id)init;
- (void)parser:foundCharacters:;
- (void)parser:foundCDATA:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void).cxx_destruct;
- (id)xmlElement;
- (void)setXmlElement:;
@end
