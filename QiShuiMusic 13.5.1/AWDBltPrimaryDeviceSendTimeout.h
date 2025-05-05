@interface AWDBltPrimaryDeviceSendTimeout : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) I connectionType;
@property (nonatomic) BOOL hasOrigConnectionType;
@property (nonatomic) I origConnectionType;
- (unsigned int)connectionType;
- (BOOL)hasConnectionType;
- (void)setConnectionType:;
- (void)setHasConnectionType:;
- (void)writeTo:;
- (unsigned long long)hash;
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
- (void)setOrigConnectionType:;
- (void)setHasOrigConnectionType:;
- (BOOL)hasOrigConnectionType;
- (unsigned int)origConnectionType;
@end
