@interface BMBiomeTableStore : NSObject
@property (nonatomic) BMTableStore tableStore;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString tableName;
- (id)select:;
- (id)tableName;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithURL:tableName:identifier:;
- (id)initWithIdentifier:tableName:;
- (id)selectTableNamed:;
- (id)tableStore;
- (void)setTableStore:;
@end
