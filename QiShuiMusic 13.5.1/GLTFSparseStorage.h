@interface GLTFSparseStorage : NSObject
@property (nonatomic) GLTFBufferView values;
@property (nonatomic) q valueOffset;
@property (nonatomic) GLTFBufferView indices;
@property (nonatomic) q indexOffset;
@property (nonatomic) q indexComponentType;
@property (nonatomic) q count;
- (long long)indexComponentType;
- (id)initWithValues:valueOffset:indices:indexOffset:indexComponentType:count:;
- (void)setIndexComponentType:;
- (id)indices;
- (void)setCount:;
- (id)values;
- (void).cxx_destruct;
- (void)setValues:;
- (long long)count;
- (void)setIndices:;
- (long long)indexOffset;
- (void)setIndexOffset:;
- (long long)valueOffset;
- (void)setValueOffset:;
@end
