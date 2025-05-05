@interface SWCollaborationNoticeTransmissionMessage : PBCodable
@property (nonatomic) I version;
@property (nonatomic) NSString guidString;
@property (nonatomic) NSData highlightChangeEvent;
@property (nonatomic) q highlightChangeEventType;
@property (nonatomic) double dateAsTimeIntervalSince1970;
- (void)setVersion:;
- (unsigned int)version;
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
- (id)guidString;
- (void)setGuidString:;
- (double)dateAsTimeIntervalSince1970;
- (void)setDateAsTimeIntervalSince1970:;
- (id)highlightChangeEvent;
- (void)setHighlightChangeEvent:;
- (long long)highlightChangeEventType;
- (void)setHighlightChangeEventType:;
@end
