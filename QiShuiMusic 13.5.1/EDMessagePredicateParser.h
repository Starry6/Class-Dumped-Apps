@interface EDMessagePredicateParser : NSObject
@property (nonatomic) EDMessageQueryParser queryParser;
- (void).cxx_destruct;
- (id)queryParser;
- (id)initWithQueryParser:;
- (id)parseResultsFromPredicate:;
+ (id)parserForPredicate:queryParser:;
@end
