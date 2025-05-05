@interface VIRefineRegionResult : NSObject
@property (nonatomic) NSArray refinedRegions;
@property (nonatomic) Q version;
- (unsigned long long)version;
- (void).cxx_destruct;
- (id)refinedRegions;
- (id)initWithRefinedRegions:version:;
@end
