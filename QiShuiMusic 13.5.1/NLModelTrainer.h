@interface NLModelTrainer : NSObject
@property (nonatomic) NLModelConfiguration configuration;
@property (nonatomic) NLDataSet dataSet;
@property (nonatomic) NSDictionary options;
@property (nonatomic) <NLModelTrainerDelegate> delegate;
@property (nonatomic) NLModel trainedModel;
@property (nonatomic) NSError trainingError;
@property (nonatomic) NSDictionary testResults;
- (void)logMessage:;
- (id)model;
- (void)trainModel;
- (void)setModel:;
- (id)dataSet;
- (id)options;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)shouldStop;
- (id)initWithConfiguration:dataSet:options:delegate:;
- (Class)modelImplClass;
- (id)trainingError;
- (void)setTrainingError:;
- (id)trainedModel;
- (id)testResults;
- (void)trainer:logMessage:;
- (BOOL)trainerShouldStop:;
+ (id)modelTrainerWithConfiguration:dataSet:options:delegate:;
@end
