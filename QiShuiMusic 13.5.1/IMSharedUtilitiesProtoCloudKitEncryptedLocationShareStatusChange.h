@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) I version;
@property (nonatomic) BOOL hasShareStatus;
@property (nonatomic) q shareStatus;
@property (nonatomic) BOOL hasShareDirection;
@property (nonatomic) q shareDirection;
@property (nonatomic) BOOL hasOtherHandle;
@property (nonatomic) NSString otherHandle;
@property (nonatomic) BOOL hasPadding;
@property (nonatomic) NSData padding;
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
- (void)setOtherHandle:;
- (id)otherHandle;
- (void)setShareStatus:;
- (void)setHasShareStatus:;
- (BOOL)hasShareStatus;
- (void)setShareDirection:;
- (void)setHasShareDirection:;
- (BOOL)hasShareDirection;
- (BOOL)hasOtherHandle;
- (long long)shareStatus;
- (long long)shareDirection;
@end
