@interface KiteProbeDataProviderDefault : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isContextEnabled;
- (id)memoryContext;
- (id)cpuContext;
- (id)gpuContext;
@end
