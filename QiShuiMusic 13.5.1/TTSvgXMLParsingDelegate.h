@interface TTSvgXMLParsingDelegate : NSObject
@property (nonatomic) NSMutableDictionary styles;
@property (nonatomic) BOOL isViewBoxSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isViewBoxSet;
- (void)setIsViewBoxSet:;
- (id)styles;
- (id)init;
- (void)parser:foundCharacters:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void).cxx_destruct;
@end
