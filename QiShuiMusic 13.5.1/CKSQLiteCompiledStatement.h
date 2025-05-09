@interface CKSQLiteCompiledStatement : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) CKSQLiteTable cachingTable;
@property (nonatomic) NSArray searchProperties;
@property (nonatomic) NSNumber limit;
@property (nonatomic) NSNumber offset;
- (id)initWithDatabase:;
- (id)limit;
- (id)doSearchValueBinding;
- (void)setOffset:;
- (void)dealloc;
- (id)addBindingVariable:withAssociatedProperty:;
- (id)bindValueColumn:type:value:;
- (void)orderByProperty:ascending:;
- (id)setSearchPredicate:forProperties:tableClass:;
- (void)setSearchProperties:;
- (id)searchBindingsDescription;
- (void)setLabel:;
- (id)label;
- (id)compile;
- (id)offset;
- (void)setLimit:;
- (id)updatedColumns;
- (void)resetAndClearBindings;
- (id)initWithTable:;
- (BOOL)step:;
- (void)setCachingTable:;
- (void).cxx_destruct;
- (id)sqlValueForVariable:;
- (id)cksqlcs_appendSQLConstantValueToString:;
- (id)bindSearchValues:;
- (id)description;
- (id)fetchedColumns;
- (id)bindValue:ofType:atIndex:;
- (id)searchProperties;
- (void)enumerateResultColumnsWithBlock:;
- (void)invalidate;
- (id)cachingTable;
- (id)boundObjects;
+ (id)statementForInserting:inTable:;
+ (id)statementForEmptyCheckInTable:;
+ (id)statementForInserting:orUpdating:inTable:;
+ (id)statementForCountingRowsInTable:;
+ (id)statementForSummingColumn:inTable:;
+ (id)_statementForFetchingMinMax:forColumn:inTable:error:;
+ (id)statementForDeletingInTable:;
+ (id)statementForFetchingMinimumValueForColumn:inTable:error:;
+ (id)statementForFetchingColumns:inTable:error:;
+ (id)statementForSizingColumn:inTable:;
+ (id)statementForFetchingAllTableNamesInDatabase:;
+ (id)statementForFetchingMaximumValueForColumn:inTable:error:;
+ (id)statementForUpdatingColumns:inTable:error:;
@end
