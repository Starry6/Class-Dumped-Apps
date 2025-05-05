@interface DNNEngine : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrontendMode:andBackendMode:;
- (int)runBackend:sparseBuffer:numDepthPoints:result:;
- (int)runFrontend:withSize:result:;
- (id)getBackendDNNFeatureVectorDim;
@end
