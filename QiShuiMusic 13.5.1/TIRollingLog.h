@interface TIRollingLog : NSObject
@property (nonatomic) NSArray currentEntries;
@property (nonatomic) Q count;
@property (nonatomic) Q maxCount;
- (void)addEntry:;
- (unsigned long long)maxCount;
- (void)addEntries:;
- (id)currentEntries;
- (id)initWithMaxCount:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)copyWithZone:;
@end
