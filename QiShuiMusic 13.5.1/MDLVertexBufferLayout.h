@interface MDLVertexBufferLayout : NSObject
@property (nonatomic) Q stride;
- (unsigned long long)stride;
- (unsigned long long)hash;
- (id)description;
- (void)setStride:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStride:;
@end
