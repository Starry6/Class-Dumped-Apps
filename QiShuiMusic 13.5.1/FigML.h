@interface FigML : NSObject
@property (nonatomic) NSURL defaultCompiledModelPath;
- (void)dealloc;
- (BOOL)setupTrialAndRetrieveConfigWithError:;
- (BOOL)ensureModel:;
- (BOOL)loadModelFromPath:failedWithError:;
- (BOOL)setupBiomeStream:failedWithError:;
- (void)writeTrainingData:;
- (id)readTrainingDataWithError:;
- (id)getPredictionWithDictionary:failedWithError:;
- (BOOL)trainMLModelWithData:progressHandlers:failedWithError:;
- (void)ensureInternalState;
- (id)initWithModelName:modelConfiguration:failedWithError:;
- (id)defaultCompiledModelPath;
@end
