@interface EFSQLUpdateStatement : NSObject
@property (nonatomic) NSString queryString;
@property (nonatomic) <EFSQLValueExpressable> whereClause;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWhereClause:;
- (id)initWithTable:conflictResolution:;
- (void)setObject:forKeyedSubscript:;
- (id)initWithTable:;
- (id)objectForKeyedSubscript:;
- (id)whereClause;
- (void).cxx_destruct;
- (void)enumerateBindingNamesAndValuesUsingBlock:;
- (id)queryString;
@end
