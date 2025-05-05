@interface CoreDAVXMLData : NSObject
@property (nonatomic) BOOL shouldAddFormattingSpaces;
@property (nonatomic) NSData data;
- (id)init;
- (void)_startElement:inNamespace:;
- (void)dealloc;
- (void)startElement:inNamespace:withAttributes:;
- (void)startElement:inNamespace:withAttributeNamesAndValues:;
- (void)endElement:inNamespace:;
- (id)data;
- (void)appendElement:inNamespace:withStringContentAsCDATA:withAttributeNamesAndValues:;
- (BOOL)shouldAddFormattingSpaces;
- (void)appendElement:inNamespace:withStringContent:withAttributeNamesAndValues:;
- (void).cxx_destruct;
- (void)_startElement:inNamespace:withAttributeNamesAndValues:attributes:;
- (void)setShouldAddFormattingSpaces:;
- (id)_prefixForNameSpace:;
+ (BOOL)string:isEqualToXmlCharString:;
@end
