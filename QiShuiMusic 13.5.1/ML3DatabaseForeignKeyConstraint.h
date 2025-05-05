@interface ML3DatabaseForeignKeyConstraint : NSObject
@property (nonatomic) ML3DatabaseTable foreignTable;
@property (nonatomic) NSArray localColumns;
@property (nonatomic) NSArray foreignColumns;
- (void).cxx_destruct;
- (id)initWithForeignTable:localColumns:foreignColumns:;
- (id)_foreignKeyClauseSQL;
- (id)foreignTable;
- (id)localColumns;
- (id)foreignColumns;
@end
