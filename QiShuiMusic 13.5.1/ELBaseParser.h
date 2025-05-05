@interface ELBaseParser : NSObject
@property (nonatomic) NSCharacterSet parserCharacterSet;
@property (nonatomic) NSSet customParserCharacterSet;
- (BOOL)coreScanner:elExpress:parserLinkNodes:;
- (id)customParserCharacterSet;
- (id)parserCharacterSet;
- (void).cxx_destruct;
@end
