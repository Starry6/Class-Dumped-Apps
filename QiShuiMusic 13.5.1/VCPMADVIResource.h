@interface VCPMADVIResource : VCPMADResource
@property (nonatomic) VIService service;
- (void)purge;
- (id)init;
- (id)service;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;
@end
