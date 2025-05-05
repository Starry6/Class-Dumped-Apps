@interface VNFaceprintInferenceNetworkDescriptor : VNInferenceNetworkDescriptor
@property (nonatomic) VNTensorDescriptor faceprintOutput;
- (void).cxx_destruct;
- (id)initWithNetworkFileURL:version:networkHeadVersions:inputImage:faceprintOutput:confidencesOutput:;
- (id)faceprintOutput;
@end
