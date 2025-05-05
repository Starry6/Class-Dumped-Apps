@interface VMUVMRegionIdentifier : NSObject
- (id)initWithTask:;
- (id)init;
- (id)taskThreadStates;
- (id)regions;
- (id)descriptionForRange:options:;
- (id)initWithGraph:options:;
- (int)_recordRegionsAroundAddress:regionDescriptionOptions:;
- (id)nonSubmapRegionContainingAddress:;
- (id)initWithTask:pid:options:;
- (id)descriptionForMallocZoneTotalsWithOptions:memorySizeDivisor:;
- (id)descriptionOfRegionsAroundAddress:options:maximumLength:memorySizeDivisor:;
- (id)descriptionForRegionTotalsWithOptions:;
- (id)descriptionOfRegionsAroundAddress:options:;
- (id)descriptionForRegionTotalsWithOptions:memorySizeDivisor:;
- (BOOL)hasFractionalPageSizes;
- (id)descriptionForRange:;
- (void).cxx_destruct;
- (id)initWithTask:options:;
+ (id)descriptionForRange:inSortedRegions:options:;
@end
