@interface GLTFBufferView : NSObject
@property (nonatomic) GLTFBuffer buffer;
@property (nonatomic) q offset;
@property (nonatomic) q length;
@property (nonatomic) q stride;
- (id)initWithBuffer:length:offset:stride:;
- (void)setBuffer:;
- (void)setOffset:;
- (id)buffer;
- (long long)stride;
- (long long)offset;
- (void).cxx_destruct;
- (long long)length;
- (void)setLength:;
- (void)setStride:;
@end
