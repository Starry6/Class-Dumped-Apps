@interface MLProgramContext : NSObject
@property (nonatomic) NSDictionary functionNameToInputLayersNames;
@property (nonatomic) NSDictionary functionNameToOutputLayersNames;
@property (nonatomic) <MLFeatureProvider> executionState;
@property (nonatomic) NSString trainFunctionLossName;
@property (nonatomic) NSString forwardFunctionLossName;
@property (nonatomic) NSDictionary functionNameToStateMap;
- (id)functionNameToOutputLayersNames;
- (void).cxx_destruct;
- (void)setFunctionNameToOutputLayersNames:;
- (id)functionNameToInputLayersNames;
- (void)setFunctionNameToInputLayersNames:;
- (id)initWithExecutionState:functionNameToStateMap:;
- (id)executionState;
- (void)setExecutionState:;
- (id)trainFunctionLossName;
- (void)setTrainFunctionLossName:;
- (id)forwardFunctionLossName;
- (void)setForwardFunctionLossName:;
- (id)functionNameToStateMap;
- (void)setFunctionNameToStateMap:;
@end
