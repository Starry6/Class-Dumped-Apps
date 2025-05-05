@interface IMXMLParserContext : NSObject
@property (nonatomic) NSData inContentAsData;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray resultsForLogging;
- (void)dealloc;
- (void)reset;
- (id)name;
- (id)initWithContent:;
- (id)resultsForLogging;
- (id)initWithContentAsData:;
- (id)inContent;
- (id)inContentAsData;
@end
