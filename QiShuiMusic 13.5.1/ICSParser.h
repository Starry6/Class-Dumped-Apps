@interface ICSParser : NSObject
@property (nonatomic) ICSTokenizer lexer;
- (void).cxx_destruct;
- (id)initWithData:options:;
- (id)makeComponent:;
- (BOOL)parseParameter:fatalError:;
- (BOOL)createPropertyType:component:withName:fatalError:;
- (BOOL)parseProperty:fatalError:;
- (BOOL)_parseComponent:;
- (void)_parseComponent:depth:fatalError:;
- (id)parseData;
- (id)lexer;
+ (id)entitiesFromNSData:options:;
@end
