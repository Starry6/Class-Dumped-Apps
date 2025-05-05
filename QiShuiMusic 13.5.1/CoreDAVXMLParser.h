@interface CoreDAVXMLParser : NSXMLParser
@property (nonatomic) CoreDAVXMLElementGenerator rootElementGenerator;
@property (nonatomic) CoreDAVXMLElementGenerator rootErrorGenerator;
@property (nonatomic) NSSet parseHints;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) CoreDAVItem rootElement;
@property (nonatomic) CoreDAVErrorItem rootError;
@property (nonatomic) NSError parserError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRootErrorGenerator:;
- (void)setBaseURL:;
- (id)baseURL;
- (void)setRootElementGenerator:;
- (void)setParseHints:;
- (id)rootError;
- (BOOL)processData:forTask:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)parseHints;
- (id)rootElement;
- (id)initWithRootElementNameSpace:name:parseClass:baseURL:;
- (id)rootElementGenerator;
- (id)rootErrorGenerator;
+ (BOOL)canHandleContentType:;
@end
