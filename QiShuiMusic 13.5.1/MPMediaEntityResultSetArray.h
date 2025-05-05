@interface MPMediaEntityResultSetArray : MPMediaArray
@property (nonatomic) <MPMediaLibraryResultSet> resultSet;
- (id)resultSet;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)copyWithZone:;
- (id)sectionInfo;
- (id)initWithResultSet:queryCriteria:entityType:library:;
- (BOOL)isQueryResultSetInvalidated;
@end
