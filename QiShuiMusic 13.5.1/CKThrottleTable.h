@interface CKThrottleTable : CKSQLiteTable
- (id)updateRequestCount:;
+ (id)dbProperties;
+ (Class)entryClass;
@end
