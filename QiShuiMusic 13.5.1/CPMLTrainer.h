@interface CPMLTrainer : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)getSolution;
- (id)init:withModelDBPath:withPropertyList:;
- (id)fileProtectionClassRequest:;
- (void)train:;
- (void)buildTrainingMachineLearningAlgorithm:;
@end
