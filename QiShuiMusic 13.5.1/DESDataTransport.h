@interface DESDataTransport : PBCodable
@property (nonatomic) BOOL hasBinary64;
@property (nonatomic) DESBinary64Transport binary64;
@property (nonatomic) BOOL hasBinary32;
@property (nonatomic) DESBinary32Transport binary32;
@property (nonatomic) BOOL hasBfloat16;
@property (nonatomic) DESBfloat16Transport bfloat16;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasBinary64;
- (BOOL)hasBinary32;
- (BOOL)hasBfloat16;
- (id)binary64;
- (void)setBinary64:;
- (id)binary32;
- (void)setBinary32:;
- (id)bfloat16;
- (void)setBfloat16:;
@end
