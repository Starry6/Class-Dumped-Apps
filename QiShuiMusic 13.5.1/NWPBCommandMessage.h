@interface NWPBCommandMessage : PBCodable
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) NSInteger command;
@property (nonatomic) BOOL hasMessageData;
@property (nonatomic) NSData messageData;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)command;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setCommand:;
- (id)copyWithZone:;
- (void)setHasCommand:;
- (BOOL)hasCommand;
- (id)commandAsString:;
- (int)StringAsCommand:;
- (BOOL)hasMessageData;
- (id)messageData;
- (void)setMessageData:;
@end
