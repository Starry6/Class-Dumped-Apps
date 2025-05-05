@interface TSIntervalFilter : NSObject
@property (nonatomic) Q multiIntervalTime;
@property (nonatomic) Q filterCount;
- (void)dealloc;
- (unsigned long long)multiIntervalTimeForEntry:;
- (void)resetFilterWithNewExpectedInterval:;
- (unsigned long long)addTimestamp:entry:;
- (void)resetFilterWithNewExpectedInterval:multiIntervalCount:;
- (void)resetFilter;
- (unsigned long long)addTimestamp:;
- (void)changeToNewFilterSize:;
- (unsigned long long)filterCountForEntry:;
- (void).cxx_destruct;
- (unsigned long long)filterCount;
- (unsigned long long)_calculateNewTimestamp:;
- (id).cxx_construct;
- (unsigned long long)multiIntervalTime;
- (id)initWithExpectedInterval:multiIntervalCount:filterSize:;
@end
