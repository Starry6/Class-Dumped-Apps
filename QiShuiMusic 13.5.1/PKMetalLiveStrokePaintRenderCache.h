@interface PKMetalLiveStrokePaintRenderCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithInk:;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (BOOL)lockPurgeableResourcesAddToSet:;
@end
