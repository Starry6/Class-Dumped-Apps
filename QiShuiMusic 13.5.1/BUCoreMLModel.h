@interface BUCoreMLModel : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL compiledUrl;
@property (nonatomic) NSString identifier;
@property (nonatomic) MLModel model;
- (id)predictionsFromBatchList:error:;
- (void)setCompiledUrl:;
- (id)compiledUrl;
- (id)predictionFromFeatureDict:error:;
- (id)model;
- (id)url;
- (id)predictionsFromBatch:error:;
- (void)dealloc;
- (void)setModel:;
- (id)identifier;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (void)setIdentifier:;
+ (id)modelWithContentsOfURL:error:;
@end
