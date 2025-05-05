@interface VIImageRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) NSArray domainInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)regionOfInterest;
- (id)domainInfo;
- (id)initWithRegionOfInterest:domains:;
- (id)initWithRegionOfInterest:domainInfo:;
+ (id)regionForEntireImageWithDomains:;
@end
