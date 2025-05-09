@interface MTLIOAccelIntersectionFunctionTable : MTLIOAccelResource
@property (nonatomic) <MTLBuffer> globalBuffer;
@property (nonatomic) Q globalBufferOffset;
@property (nonatomic) MTLIOAccelVisibleFunctionTable<MTLVisibleFunctionTableSPI> visibleFunctionTable;
@property (nonatomic) {MTLResourceID=Q} gpuResourceID;
@property (nonatomic) Q resourceIndex;
@property (nonatomic) Q uniqueIdentifier;
@property (nonatomic) Q gpuHandle;
@property (nonatomic) NSString label;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q cpuCacheMode;
@property (nonatomic) Q storageMode;
@property (nonatomic) Q hazardTrackingMode;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) <MTLHeap> heap;
@property (nonatomic) Q heapOffset;
@property (nonatomic) Q allocatedSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBuffer:offset:atIndex:;
- (id)gpuResourceID;
- (unsigned long long)resourceIndex;
- (unsigned long long)gpuHandle;
- (void)setVisibleFunctionTables:withBufferRange:;
- (void)setVisibleFunctionTable:atBufferIndex:;
- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (void)setFunctions:withRange:;
- (void)setGlobalBuffer:;
- (id)globalBuffer;
- (void)setFunction:atIndex:;
- (void)setGlobalBufferOffset:;
- (unsigned long long)globalBufferOffset;
- (void)setBuffers:offsets:withRange:;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:atIndex:;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:withRange:;
- (id)visibleFunctionTable;
- (id)initWithVisibleFunctionTable:;
@end
