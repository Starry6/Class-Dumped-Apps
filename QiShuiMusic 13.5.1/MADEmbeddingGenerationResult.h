@interface MADEmbeddingGenerationResult : MADResult
@property (nonatomic) Q embeddingType;
@property (nonatomic) NSDate assetCreationDate;
@property (nonatomic) NSData data;
@property (nonatomic) NSData checksum;
@property (nonatomic) NSData thumbnail;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)thumbnail;
- (void).cxx_destruct;
- (id)description;
- (id)checksum;
- (unsigned long long)embeddingType;
- (id)assetCreationDate;
- (id)initWithEmbeddingType:assetCreationDate:data:checksum:andThumbnail:;
+ (BOOL)supportsSecureCoding;
@end
