@interface EFSQLInsertStatement : NSObject
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) NSString queryString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEmpty;
- (void)renderStatementWithNamedBindingsInto:;
- (id)initWithTable:conflictResolution:;
- (void)setObject:forKeyedSubscript:;
- (id)initWithTable:;
- (id)objectForKeyedSubscript:;
- (id)addValue;
- (void).cxx_destruct;
- (void)enumerateBindingIndicesAndValuesUsingBlock:;
- (void)enumerateBindingNamesAndValuesUsingBlock:;
- (id)queryString;
@end
