@interface MDLVertexAttributeData : NSObject
@property (nonatomic) MDLMeshBufferMap map;
@property (nonatomic) ^v dataStart;
@property (nonatomic) Q stride;
@property (nonatomic) Q format;
@property (nonatomic) Q bufferSize;
- (void)setFormat:;
- (id)init;
- (unsigned long long)format;
- (unsigned long long)stride;
- (void)setBufferSize:;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (void)setStride:;
- (unsigned long long)bufferSize;
- (id)dataStart;
- (void)setDataStart:;
- (void)setbufferSize:;
@end
