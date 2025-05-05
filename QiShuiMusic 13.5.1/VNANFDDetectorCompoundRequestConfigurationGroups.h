@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject
- (id)init;
- (id)configurationForRequest:;
- (id)allConfigurations;
- (void).cxx_destruct;
- (unsigned long long)count;
+ (id)createCompoundConfigurationHashKeyForRequest:compoundRequestRevision:;
@end
