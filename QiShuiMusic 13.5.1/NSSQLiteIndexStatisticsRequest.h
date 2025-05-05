@interface NSSQLiteIndexStatisticsRequest : NSPersistentStoreRequest
- (unsigned long long)requestType;
+ (id)indexStatistics;
@end
