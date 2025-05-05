@interface ML3DatabaseTable : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray columns;
@property (nonatomic) NSArray foreignKeyConstraints;
- (id)columns;
- (void).cxx_destruct;
- (id)name;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)columnDefinitionsSQL;
- (id)createTableSQLWithExistenceClause:;
- (id)_copyWithZone:concreteClass:;
- (id)foreignKeyConstraints;
@end
