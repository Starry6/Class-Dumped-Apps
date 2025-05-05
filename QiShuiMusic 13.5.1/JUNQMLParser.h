@interface JUNQMLParser : NSObject
@property (nonatomic) ^{_xmlParserCtxt=^{_xmlSAXHandler}^v^{_xmlDoc}ii**ii^{_xmlParserInput}ii^^{_xmlParserInput}^{_xmlNode}ii^^{_xmlNode}i{_xmlParserNodeInfoSeq=QQ^{_xmlParserNodeInfo}}iiiiii{_xmlValidCtxt=^v^?^?^{_xmlNode}ii^^{_xmlNode}I^{_xmlDoc}i^{_xmlValidState}ii^{_xmlValidState}^{_xmlAutomata}^{_xmlAutomataState}}ii**ii^*qqiii***^iii^ii^{_xmlParserInput}iiii^vii^vii^{_xmlDict}^*ii***iii^*^i^{_xmlStartTag}^{_xmlHashTable}^{_xmlHashTable}iiii^{_xmlNode}i^{_xmlAttr}{_xmlError=ii*i*i***ii^v^v}iQQ^{_xmlParserNodeInfo}ii^{_xmlParserNodeInfo}iQ} _parserContext;
@property (nonatomic) NSString string;
@property (nonatomic) <JUNQMLParser> delegate;
- (id)string;
- (id)init;
- (id)initWithString:;
- (void)setDelegate:;
- (void)parse;
- (id)delegate;
- (void).cxx_destruct;
- (id)_parserContext;
- (void)reportErrorWithCode:userInfo:;
- (void)reportParseError:;
- (void)set_parserContext:;
@end
