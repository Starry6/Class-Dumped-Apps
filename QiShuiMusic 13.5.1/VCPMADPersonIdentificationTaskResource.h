@interface VCPMADPersonIdentificationTaskResource : VCPMADResource
- (id)photoLibrary;
- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (id)visionSession;
- (void)_loadResources;
- (id)personIdentityModel;
- (id)faceProcessingContext;
+ (id)sharedResource;
@end
