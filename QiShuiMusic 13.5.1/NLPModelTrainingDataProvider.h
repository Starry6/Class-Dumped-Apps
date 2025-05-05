@interface NLPModelTrainingDataProvider : NLDataProvider
- (void).cxx_destruct;
- (id)initWithConfiguration:numberOfInstances:dataSource:instanceDataProvider:;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:;
@end
