@interface SASProximityAnisetteDataProvider : NSObject
@property (nonatomic) SASProximitySession session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSession:;
- (void)legacyAnisetteDataForDSID:withCompletion:;
- (id)session;
- (void).cxx_destruct;
- (void)fetchAnisetteDataAndProvisionIfNecessary:withCompletion:;
- (id)copyWithZone:;
- (void)provisionAnisetteWithCompletion:;
- (void)syncAnisetteWithSIMData:completion:;
- (void)eraseAnisetteWithCompletion:;
@end
