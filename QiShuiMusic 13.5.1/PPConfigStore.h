@interface PPConfigStore : NSObject
- (unsigned long long)assetVersionWithError:;
- (id)variantNameWithError:;
- (id)readableTrialTreatmentsMappingWithError:;
+ (id)defaultStore;
@end
