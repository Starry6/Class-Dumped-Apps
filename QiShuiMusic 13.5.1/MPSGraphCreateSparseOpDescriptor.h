@interface MPSGraphCreateSparseOpDescriptor : NSObject
@property (nonatomic) Q sparseStorageType;
@property (nonatomic) I dataType;
- (void)setDataType:;
- (unsigned int)dataType;
- (id)copyWithZone:;
- (unsigned long long)sparseStorageType;
- (void)setSparseStorageType:;
+ (id)descriptorWithStorageType:dataType:;
@end
