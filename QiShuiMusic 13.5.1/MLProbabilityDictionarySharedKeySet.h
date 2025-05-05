@interface MLProbabilityDictionarySharedKeySet : NSObject
@property (nonatomic) Q count;
@property (nonatomic) Q uniqueLabelCount;
@property (nonatomic) NSEnumerator labelEnumerator;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)labelAtIndex:;
- (id)initWithLabels:;
- (unsigned long long)indexOfLabel:;
- (unsigned long long)uniqueLabelCount;
- (id)labelEnumerator;
@end
