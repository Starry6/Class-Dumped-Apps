@interface EFSQLDeleteStatement : NSObject
@property (nonatomic) Q limit;
@property (nonatomic) NSString queryString;
- (unsigned long long)limit;
- (void)orderByColumn:ascending:;
- (void)setLimit:;
- (id)initWithTable:;
- (void).cxx_destruct;
- (void)orderBy:ascending:;
- (id)queryString;
- (id)initWithTable:where:;
@end
