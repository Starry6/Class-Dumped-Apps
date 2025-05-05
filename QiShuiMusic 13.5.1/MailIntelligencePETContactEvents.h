@interface MailIntelligencePETContactEvents : PBCodable
@property (nonatomic) NSMutableArray contactEvents;
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
- (id)contactEvents;
- (void)setContactEvents:;
- (void)clearContactEvents;
- (void)addContactEvent:;
- (unsigned long long)contactEventsCount;
- (id)contactEventAtIndex:;
+ (Class)contactEventType;
@end
