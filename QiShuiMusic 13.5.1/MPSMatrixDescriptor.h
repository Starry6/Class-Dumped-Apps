@interface MPSMatrixDescriptor : NSObject
@property (nonatomic) Q rows;
@property (nonatomic) Q columns;
@property (nonatomic) Q matrices;
@property (nonatomic) I dataType;
@property (nonatomic) Q rowBytes;
@property (nonatomic) Q matrixBytes;
- (unsigned long long)columns;
- (void)setDataType:;
- (id)init;
- (void)setRows:;
- (unsigned long long)rows;
- (unsigned int)dataType;
- (void)setColumns:;
- (unsigned long long)matrices;
- (unsigned long long)rowBytes;
- (void)setRowBytes:;
- (unsigned long long)matrixBytes;
+ (id)matrixDescriptorWithRows:columns:matrices:rowBytes:matrixBytes:dataType:;
+ (unsigned long long)rowBytesForColumns:dataType:;
+ (id)matrixDescriptorWithRows:columns:rowBytes:dataType:;
+ (unsigned long long)rowBytesFromColumns:dataType:;
+ (id)matrixDescriptorWithDimensions:columns:rowBytes:dataType:;
@end
