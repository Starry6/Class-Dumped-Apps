@interface FigMetalAllocatorDescriptor : NSObject
@property (nonatomic) <MTLBuffer> externalBuffer;
@property (nonatomic) NSString label;
@property (nonatomic) Q memSize;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) BOOL wireMemory;
@property (nonatomic) BOOL allowFallback;
@property (nonatomic) BOOL autoUseSubAllocators;
@property (nonatomic) NSInteger compressionLevel;
- (unsigned long long)resourceOptions;
- (id)init;
- (void)setResourceOptions:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (BOOL)allowFallback;
- (void)setAllowFallback:;
- (void)setCompressionLevel:;
- (int)compressionLevel;
- (unsigned long long)memSize;
- (void)setMemSize:;
- (void)setWireMemory:;
- (BOOL)wireMemory;
- (BOOL)autoUseSubAllocators;
- (void)setAutoUseSubAllocators:;
- (id)externalBuffer;
- (void)setExternalBuffer:;
@end
