@interface AWDIDSWiProxDidSendData : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) Q resultCode;
- (unsigned long long)resultCode;
- (void)setHasResultCode:;
- (void)writeTo:;
- (BOOL)hasResultCode;
- (unsigned long long)hash;
- (void)setResultCode:;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
