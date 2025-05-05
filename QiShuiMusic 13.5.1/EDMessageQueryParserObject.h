@interface EDMessageQueryParserObject : NSObject
@property (nonatomic) Q queryType;
@property (nonatomic) NSPredicate predicate;
- (id)predicate;
- (void).cxx_destruct;
- (unsigned long long)queryType;
- (id)initWithQueryType:predicate:;
@end
