@interface CAPContactFillerShareEvent : PBCodable
@property (nonatomic) NSMutableArray contactEvents;
@property (nonatomic) CAPContactFillerUserEvent userEvent;
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
- (id)userEvent;
- (void)setUserEvent:;
+ (Class)contactEventType;
@end
