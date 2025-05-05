@interface MDLVertexAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q format;
@property (nonatomic) Q offset;
@property (nonatomic) Q bufferIndex;
@property (nonatomic) double time;
@property (nonatomic)  initializationValue;
- (void)setFormat:;
- (void)setOffset:;
- (void)setTime:;
- (id)init;
- (void)setName:;
- (double)time;
- (unsigned long long)format;
- (unsigned long long)bufferIndex;
- (void)setBufferIndex:;
- (unsigned long long)hash;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithName:format:offset:bufferIndex:;
- (id)initializationValue;
- (void)setInitializationValue:;
@end
