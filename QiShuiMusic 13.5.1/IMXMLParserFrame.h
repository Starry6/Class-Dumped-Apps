@interface IMXMLParserFrame : NSObject
- (void)parser:context:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void)parser:context:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:context:foundCharacters:;
- (void)parser:context:foundIgnorableWhitespace:;
@end
