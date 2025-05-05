@interface GEOSQLiteVirtualTable : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) ^{sqlite3_module=i^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?} module;
@property (nonatomic) NSString columnDefinitions;
@property (nonatomic) Q rowCount;
- (unsigned long long)rowCount;
- (id)init;
- (id)module;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)columnDefinitions;
- (void)fetchValueForContext:row:column:;
@end
