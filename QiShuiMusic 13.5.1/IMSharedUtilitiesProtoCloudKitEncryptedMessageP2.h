@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP2 : PBCodable
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) I version;
@property (nonatomic) BOOL hasThreadIdentifier;
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) BOOL hasPadding;
@property (nonatomic) NSData padding;
- (void)setThreadIdentifier:;
- (id)threadIdentifier;
- (void)setHasVersion:;
- (void)dealloc;
- (void)setVersion:;
- (unsigned int)version;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setPadding:;
- (BOOL)readFrom:;
- (id)description;
- (id)padding;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPadding;
- (BOOL)hasThreadIdentifier;
@end
