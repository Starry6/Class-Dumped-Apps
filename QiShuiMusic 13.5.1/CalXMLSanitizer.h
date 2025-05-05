@interface CalXMLSanitizer : NSObject
@property (nonatomic) ^{__sFILE=*iiss{__sbuf=*i}i^v^?^?^?^?{__sbuf=*i}^{__sFILEX}i[3C][1C]{__sbuf=*i}iq} output;
@property (nonatomic) NSString scrubbedXML;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)output;
- (id)init;
- (void)parser:foundCharacters:;
- (void)parser:parseErrorOccurred:;
- (void)parser:foundCDATA:;
- (void)setOutput:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void).cxx_destruct;
- (void)parser:foundComment:;
- (id)getIndentation;
- (id)currentRedactionRule;
- (void)_appendNamespaceURI:forElementName:qualifiedName:;
- (void)flushContents;
- (id)scrubbedXML;
@end
