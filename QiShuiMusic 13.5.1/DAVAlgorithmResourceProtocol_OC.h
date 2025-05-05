@interface DAVAlgorithmResourceProtocol_OC : DAVResourceProtocol_OC
- (id)buildURS;
- (id)initWithRequirements:modelNameMapString:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelName:;
+ (BOOL)isAlgorithmResourceWithResourceId:;
@end
