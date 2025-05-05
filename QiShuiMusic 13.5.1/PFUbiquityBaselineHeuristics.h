@interface PFUbiquityBaselineHeuristics : NSObject
- (id)init;
- (void)dealloc;
- (id)copy;
- (id)description;
- (id)copyWithZone:;
- (id)initWithLocalPeerID:storeName:modelVersionHash:andUbiquityRootLocation:;
@end
