@interface CTStewieCompressionResult : NSObject
@property (nonatomic) NSData compressedData;
@property (nonatomic) Q codecId;
@property (nonatomic) BOOL isPreferredCodec;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)compressedData;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCompressedData:;
- (unsigned long long)codecId;
- (void)setCodecId:;
- (BOOL)isPreferredCodec;
- (void)setIsPreferredCodec:;
+ (BOOL)supportsSecureCoding;
@end
