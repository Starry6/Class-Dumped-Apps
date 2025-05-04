@interface AWEContentEvalFactor : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString parserName;
@property (nonatomic) NSDictionary parseInfo;
- (id)initWithName:config:;
- (id)parserName;
- (void)setParserName:;
- (id)parseInfo;
- (void)setParseInfo:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
