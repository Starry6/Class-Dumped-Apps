@interface MTLAccelerationStructureAllocationDescriptor : NSObject
@property (nonatomic) Q storageMode;
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) Q resourceIndex;
- (void)setForceResourceIndex:;
- (void)setResourceIndex:;
- (BOOL)forceResourceIndex;
- (unsigned long long)resourceIndex;
- (id)init;
- (unsigned long long)storageMode;
- (void)setStorageMode:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
