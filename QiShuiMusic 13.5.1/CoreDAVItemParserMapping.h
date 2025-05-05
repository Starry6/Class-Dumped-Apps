@interface CoreDAVItemParserMapping : NSObject
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSString name;
@property (nonatomic) # parseClass;
- (void)setName:;
- (void)setNameSpace:;
- (id)initWithNameSpace:name:parseClass:;
- (id)nameSpace;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (Class)parseClass;
- (void)setParseClass:;
@end
