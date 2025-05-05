@interface MPSGraphMatrixDecompositionDescriptor : NSObject
@property (nonatomic) Q decompositionType;
@property (nonatomic) I dataType;
- (void)setDataType:;
- (unsigned int)dataType;
- (id)copyWithZone:;
- (unsigned long long)decompositionType;
- (void)setDecompositionType:;
+ (id)descriptorWithDecompositionType:dataType:;
@end
