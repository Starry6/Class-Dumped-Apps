@interface VCPFlowFeatureExtractor : VCPEspressoModel
- (void).cxx_destruct;
- (id)initModule:config:cancel:;
- (int)bindWithBuffers:imgFeature:;
- (int)extractFeatureFromImage:toFeature:callback:;
- (int)setFeatureShape:height:width:level:;
@end
