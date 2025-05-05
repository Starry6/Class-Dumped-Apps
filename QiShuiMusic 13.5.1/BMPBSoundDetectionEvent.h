@interface BMPBSoundDetectionEvent : PBCodable
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasSoundDetectionType;
@property (nonatomic) NSString soundDetectionType;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
- (void)setAbsoluteTimestamp:;
- (void)setHasAbsoluteTimestamp:;
- (void)setName:;
- (BOOL)hasName;
- (BOOL)hasAbsoluteTimestamp;
- (void)writeTo:;
- (double)absoluteTimestamp;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSoundDetectionType;
- (id)soundDetectionType;
- (void)setSoundDetectionType:;
@end
