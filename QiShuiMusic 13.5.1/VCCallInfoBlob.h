@interface VCCallInfoBlob : PBCodable
@property (nonatomic) I callID;
@property (nonatomic) I clientVersion;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSString frameworkVersion;
@property (nonatomic) NSString osVersion;
- (id)deviceType;
- (void)setDeviceType:;
- (id)osVersion;
- (void)dealloc;
- (void)setClientVersion:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setOsVersion:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned int)clientVersion;
- (id)copyWithZone:;
- (unsigned int)callID;
- (void)setCallID:;
- (id)frameworkVersion;
- (void)setFrameworkVersion:;
- (id)stringForCheckpoint;
@end
