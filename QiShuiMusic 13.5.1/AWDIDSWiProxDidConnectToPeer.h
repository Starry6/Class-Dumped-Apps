@interface AWDIDSWiProxDidConnectToPeer : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) Q duration;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) Q resultCode;
- (unsigned long long)resultCode;
- (BOOL)hasDuration;
- (void)setHasResultCode:;
- (void)setHasDuration:;
- (void)writeTo:;
- (BOOL)hasResultCode;
- (unsigned long long)hash;
- (void)setResultCode:;
- (void)copyTo:;
- (void)setDuration:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
