@interface ADEspressoMonocularInferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor depthOutput;
- (void).cxx_destruct;
- (id)depthOutput;
- (id)colorInput;
- (id)initWithNetworkProvider:;
@end
