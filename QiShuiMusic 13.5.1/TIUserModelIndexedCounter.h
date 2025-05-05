@interface TIUserModelIndexedCounter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger dataType;
@property (nonatomic) NSInteger bucketCount;
@property (nonatomic) NSArray currentCounts;
@property (nonatomic) NSArray counts;
@property (nonatomic) NSNumber aggregatedCount;
@property (nonatomic) NSInteger days;
- (id)counts;
- (int)bucketCount;
- (id)initWithName:;
- (int)dataType;
- (void).cxx_destruct;
- (id)name;
- (int)days;
- (void)prepareBuckets;
- (id)currentCounts;
- (id)countsForNumberOfDays:;
- (id)aggregatedCount;
- (id)aggregatedCountForNumberOfDays:;
- (void)extendToNumberOfDays:;
- (void)updateWithInteger:forIndex:;
- (void)updateWithDouble:forIndex:;
- (void)updateWithLoadedInteger:andDouble:forIndex:andDaysPrior:;
- (id)_createEmptyCountsArray;
- (void)doPersist:forDate:forContext:;
@end
