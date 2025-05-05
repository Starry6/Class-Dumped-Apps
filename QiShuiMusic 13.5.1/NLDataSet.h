@interface NLDataSet : NSObject
@property (nonatomic) NLModelConfiguration configuration;
@property (nonatomic) Q numberOfTrainingInstances;
@property (nonatomic) Q numberOfValidationInstances;
@property (nonatomic) Q numberOfTestInstances;
- (id)configuration;
- (void).cxx_destruct;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfTrainingInstances;
- (id)initWithConfiguration:trainingDataURL:validationDataURL:testDataURL:;
- (id)dataProviderOfType:;
- (id)inverseLabelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)initWithConfiguration:trainingDataProvider:validationDataProvider:testDataProvider:;
- (id)initWithConfiguration:dataProvider:validationSplit:testingSplit:;
- (unsigned long long)numberOfValidationInstances;
- (unsigned long long)numberOfTestInstances;
- (id)trainingInstanceAtIndex:;
- (id)validationInstanceAtIndex:;
- (id)testInstanceAtIndex:;
+ (id)dataSetWithDataSet:constraintParameters:modelTrainer:;
@end
