@interface FigMetalAllocatorBackendDescriptor : NSObject
@property (nonatomic) <MTLBuffer> externalBuffer;
@property (nonatomic) NSString label;
@property (nonatomic) Q memSize;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) BOOL wireMemory;
- (unsigned long long)resourceOptions;
- (id)init;
- (void)setResourceOptions:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)memSize;
- (void)setMemSize:;
- (void)setWireMemory:;
- (BOOL)wireMemory;
- (id)externalBuffer;
- (void)setExternalBuffer:;
@end
