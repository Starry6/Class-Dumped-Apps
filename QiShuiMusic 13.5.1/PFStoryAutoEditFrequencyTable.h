@interface PFStoryAutoEditFrequencyTable : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValueCounts:randomNumberGenerator:fallbackValue:;
- (BOOL)hasValue:;
- (id)nextValue;
- (id)nextValuePassingTest:;
@end
