@interface BNCoreData.StatisticObjectContext : NSManagedObjectContext
- (id)initWithConcurrencyType:;
- (void)performBlockAndWait:;
- (id)initWithCoder:;
- (BOOL)save:;
- (void)performBlock:;
@end
