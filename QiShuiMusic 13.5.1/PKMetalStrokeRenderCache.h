@interface PKMetalStrokeRenderCache : NSObject
@property (nonatomic) NSArray buffers;
@property (nonatomic) NSArray secondaryBuffers;
@property (nonatomic) PKInk ink;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buffers;
- (void).cxx_destruct;
- (id)ink;
- (BOOL)isCompatibleWithInk:;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (BOOL)lockPurgeableResourcesAddToSet:;
- (id)initWithInk:;
- (void)addBuffer:;
- (void)addSecondaryBuffer:;
- (id)secondaryBuffers;
@end
