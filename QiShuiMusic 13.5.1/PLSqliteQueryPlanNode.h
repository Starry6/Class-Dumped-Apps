@interface PLSqliteQueryPlanNode : NSObject
@property (nonatomic) NSInteger identifier;
@property (nonatomic) NSInteger parentIdentifier;
@property (nonatomic) NSInteger unused;
@property (nonatomic) NSString nodeDescription;
- (int)parentIdentifier;
- (int)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:parentIdentifier:unused:nodeDescription:;
- (int)unused;
- (id)nodeDescription;
@end
