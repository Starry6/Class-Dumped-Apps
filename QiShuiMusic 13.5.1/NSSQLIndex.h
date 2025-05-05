@interface NSSQLIndex : NSObject
@property (nonatomic) NSFetchIndexDescription indexDescription;
@property (nonatomic) NSSQLEntity sqlEntity;
- (void)dealloc;
- (id)indexDescription;
- (id)bulkUpdateStatementsForStore:;
- (BOOL)isEqual:;
- (BOOL)isUnique;
- (id)dropStatementsForStore:;
- (id)generateStatementsForStore:;
- (id)initForIndexDescription:sqlEntity:;
- (id)sqlEntity;
@end
