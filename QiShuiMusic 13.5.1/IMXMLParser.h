@interface IMXMLParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parser:foundCharacters:;
- (void)parser:parseErrorOccurred:;
- (void)parser:didEndElement:namespaceURI:qualifiedName:;
- (void)parser:didStartElement:namespaceURI:qualifiedName:attributes:;
- (void)parser:foundIgnorableWhitespace:;
- (void)_setupTidy;
- (void)_teardownTidy;
- (id)_newDataByTidyingData:;
- (void)invokedTidyAndSucceeded:;
- (BOOL)parseContext:;
+ (id)sharedInstance;
@end
