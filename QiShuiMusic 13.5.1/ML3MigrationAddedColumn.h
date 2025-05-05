@interface ML3MigrationAddedColumn : NSObject
@property (nonatomic) NSString columnName;
@property (nonatomic) NSString foreignTableName;
@property (nonatomic) NSString foreignColumnName;
@property (nonatomic) NSString joinColumnName;
@property (nonatomic) BOOL shouldImportFromForeignTable;
- (id)columnName;
- (void).cxx_destruct;
- (id)initWithName:foreignTable:foreignColumn:joinColumn:;
- (BOOL)shouldImportFromForeignTable;
- (id)foreignTableName;
- (id)foreignColumnName;
- (id)joinColumnName;
@end
