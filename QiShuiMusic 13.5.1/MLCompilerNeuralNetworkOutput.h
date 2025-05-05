@interface MLCompilerNeuralNetworkOutput : NSObject
@property (nonatomic) {shared_ptr<Espresso::net>=^{net}^{__shared_weak_count}} network;
@property (nonatomic) {shared_ptr<MIL::IRProgram>=^{IRProgram}^{__shared_weak_count}} program;
- (id)network;
- (void).cxx_destruct;
- (id)program;
- (id).cxx_construct;
- (id)initWithEspressoNetwork:;
- (id)initWithMILProgram:;
+ (id)outputWithEspressoNetwork:;
+ (id)outputWithMILProgram:;
@end
