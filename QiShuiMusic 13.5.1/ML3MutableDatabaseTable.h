@interface ML3MutableDatabaseTable : ML3DatabaseTable
@property (nonatomic) NSString name;
@property (nonatomic) NSArray columns;
@property (nonatomic) NSArray foreignKeyConstraints;
- (void)setName:;
- (void)setColumns:;
- (void)setForeignKeyConstraints:;
@end
