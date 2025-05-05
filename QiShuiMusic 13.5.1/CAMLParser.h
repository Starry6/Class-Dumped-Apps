@interface CAMLParser : NSObject
@property (nonatomic) NSURL baseURL;
@property (nonatomic) <CAMLParserDelegate> delegate;
@property (nonatomic) NSError error;
@property (nonatomic) @ result;
- (id)result;
- (id)init;
- (void)parserError:;
- (void)dealloc;
- (void)parserWarning:;
- (void)setBaseURL:;
- (id)baseURL;
- (void)setDelegate:;
- (void)setElementValue:;
- (id)error;
- (id)attributeForKey:remove:;
- (BOOL)parseData:;
- (id)delegate;
- (id)willLoadResourceFromURL:;
- (id)elementValue;
- (BOOL)parseContentsOfURL:;
- (BOOL)parseBytes:length:;
- (void)didLoadResource:fromURL:;
- (id)objectById:;
- (BOOL)parseString:;
- (id)didFailToLoadResourceFromURL:;
+ (id)parser;
+ (id)parseContentsOfURL:;
@end
