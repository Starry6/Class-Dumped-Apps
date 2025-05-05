@interface ML3DatabaseResult : NSObject
@property (nonatomic) NSString limitProperty;
@property (nonatomic) q limitValue;
- (long long)limitValue;
- (id)init;
- (id)rows;
- (BOOL)hasAtLeastOneRow;
- (void)setLimitProperty:;
- (id)objectsInColumn:;
- (void)setLimitProperty:limitValue:;
- (id)stringValueForFirstRowAndColumn;
- (unsigned long long)indexForColumnName:;
- (void).cxx_destruct;
- (id)_statement;
- (id)initWithStatement:connection:;
- (id)objectForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;
- (id)limitProperty;
- (void)setLimitValue:;
- (id)columnNameIndexMap;
- (void)enumerateRowsWithBlock:;
@end
