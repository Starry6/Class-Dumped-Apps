@interface NLModelTrainingDataSet : NLDataSet
- (void).cxx_destruct;
- (id)initWithConfiguration:numberOfTrainingInstances:numberOfValidationInstances:trainingDataSource:validationDataSource:instanceDataProvider:;
- (id)dataProviderOfType:;
@end
