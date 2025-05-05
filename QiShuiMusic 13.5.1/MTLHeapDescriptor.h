@interface MTLHeapDescriptor : NSObject
@property (nonatomic) Q size;
@property (nonatomic) Q storageMode;
@property (nonatomic) Q cpuCacheMode;
@property (nonatomic) q sparsePageSize;
@property (nonatomic) Q hazardTrackingMode;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) q type;
- (void)setSparsePageSize:;
- (long long)sparsePageSize;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
