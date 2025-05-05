@interface ETModelDef : NSObject
@property (nonatomic) {shared_ptr<Espresso::net>=^{net}^{__shared_weak_count}} network;
@property (nonatomic) NSMutableArray all_variables;
@property (nonatomic) {shared_ptr<Espresso::gradient_builder>=^{gradient_builder}^{__shared_weak_count}} gb;
- (void)setNetwork:;
- (id)network;
- (void).cxx_destruct;
- (id)initWithNetwork:;
- (id).cxx_construct;
- (id)layerNames;
- (void)transformForTraining:;
- (id)topNamesForLayerIndex:;
- (id)layerForName:;
- (id)weightsForLayer:;
- (id)biasesForLayer:;
- (void)updateLayer:withWeights:length:;
- (void)updateLayer:withBiases:length:;
- (void)randomizeWeightsForLayer:withSeed:;
- (void)setupVariablesDef;
- (id)variableNameForLayer:kind:;
- (int)configureLayersToTrain:reinitializeVariables:;
- (id)variables;
- (id)variableForLayer:kind:;
- (id)all_variables;
- (void)setAll_variables:;
- (id)gb;
- (void)setGb:;
@end
