@interface AWDCoreRoutineLMPAutofillSelectedInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) NSString eventId;
@property (nonatomic) BOOL hasInteraction;
@property (nonatomic) NSInteger interaction;
- (void)dealloc;
- (int)interaction;
- (void)setInteraction:;
- (void)writeTo:;
- (BOOL)hasInteraction;
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
- (BOOL)hasEventId;
- (id)eventId;
- (void)setEventId:;
- (void)setHasInteraction:;
@end
