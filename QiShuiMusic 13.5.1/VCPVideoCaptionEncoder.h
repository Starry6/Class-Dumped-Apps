@interface VCPVideoCaptionEncoder : NSObject
@property (nonatomic) NSInteger embeddingHeight;
@property (nonatomic) NSInteger embeddingWidth;
@property (nonatomic) NSInteger embeddingChannels;
@property (nonatomic) NSInteger embeddingSequenceLength;
@property (nonatomic) ^f videoEmbedding;
- (void).cxx_destruct;
- (id)initWithModelPath:;
- (int)inference:;
- (int)embeddingHeight;
- (int)embeddingWidth;
- (int)embeddingChannels;
- (int)embeddingSequenceLength;
- (id)videoEmbedding;
@end
