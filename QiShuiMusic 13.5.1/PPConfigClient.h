@interface PPConfigClient : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (unsigned long long)assetVersionWithError:;
- (id)variantNameWithError:;
- (id)readableTrialTreatmentsMappingWithError:;
+ (id)sharedInstance;
@end
