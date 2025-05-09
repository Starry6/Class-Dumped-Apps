@interface BMPBTextInputSessionEvent : PBCodable
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) NSInteger sessionType;
- (int)sessionType;
- (BOOL)hasSessionType;
- (void)setHasSessionType:;
- (BOOL)hasBundleID;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)writeTo:;
- (unsigned long long)hash;
- (int)StringAsSessionType:;
- (void)copyTo:;
- (void)setDuration:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (id)sessionTypeAsString:;
- (id)bundleID;
- (double)duration;
- (BOOL)isEqual:;
- (void)setSessionType:;
- (id)copyWithZone:;
- (void)setBundleID:;
@end
