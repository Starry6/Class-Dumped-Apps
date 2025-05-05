@interface IIO_CXMLParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithError:;
- (void)parser:foundCharacters:;
- (void)parser:parseErrorOccurred:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (id)initializeWithData:;
+ (id)dictionaryForXMLData:error:;
@end
