@interface VMUScanOverlay : NSObject
@property (nonatomic) NSArray refinementRules;
- (void)addMetadataRefinementRule:;
- (id)refinementRules;
- (id)initWithScanner:;
- (void).cxx_destruct;
+ (id)defaultOverlayWithScanner:;
+ (BOOL)foundationHasNSSliceMemoryOptimization;
+ (id)defaultOverlay;
@end
