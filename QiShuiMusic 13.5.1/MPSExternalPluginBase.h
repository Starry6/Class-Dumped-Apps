@interface MPSExternalPluginBase : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)maxBatchSize;
- (id)init;
- (id)debugDescription;
- (id)initWithDevice:;
- (id)device;
@end
