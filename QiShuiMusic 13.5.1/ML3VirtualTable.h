@interface ML3VirtualTable : NSObject
@property (nonatomic) {shared_ptr<ML3VirtualTableDataSource>=^{ML3VirtualTableDataSource}^{__shared_weak_count}} dataSource;
@property (nonatomic) <ML3VirtualTableDelegate> delegate;
@property (nonatomic) ML3DatabaseTable databaseTable;
@property (nonatomic) ML3DatabaseConnection connection;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)databaseTable;
- (void)setDataSource:;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)unregister;
- (BOOL)registerWithConnection:;
- (id)dataSource;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)initWithDatabaseTable:;
@end
