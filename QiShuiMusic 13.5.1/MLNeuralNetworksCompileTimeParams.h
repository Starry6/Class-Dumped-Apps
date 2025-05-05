@interface MLNeuralNetworksCompileTimeParams : NSObject
@property (nonatomic) q lossType;
@property (nonatomic) q optimizerType;
@property (nonatomic) NSDictionary optimizerParameters;
@property (nonatomic) NSDictionary lossParameters;
@property (nonatomic) NSArray trainableLayerNames;
@property (nonatomic) NSDictionary updateParameters;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)updateParameters;
- (void).cxx_destruct;
- (long long)optimizerType;
- (void)setUpdateParameters:;
- (id)initWithLossType:optimizerType:optimizerParameters:lossParameters:trainableLayerNames:updateParameters:;
- (BOOL)writeUpdatableParamsToURL:error:;
- (id)unarchiveUpdatableParamsAtURL:error:;
- (long long)lossType;
- (void)setLossType:;
- (void)setOptimizerType:;
- (id)optimizerParameters;
- (void)setOptimizerParameters:;
- (id)lossParameters;
- (void)setLossParameters:;
- (id)trainableLayerNames;
- (void)setTrainableLayerNames:;
+ (BOOL)supportsSecureCoding;
@end
