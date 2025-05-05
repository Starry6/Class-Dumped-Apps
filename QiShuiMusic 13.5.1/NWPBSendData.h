@interface NWPBSendData : PBCodable
@property (nonatomic) BOOL hasClientUUID;
@property (nonatomic) NSString clientUUID;
@property (nonatomic) BOOL hasMessageData;
@property (nonatomic) NSData messageData;
@property (nonatomic) BOOL hasReceiveWindow;
@property (nonatomic) I receiveWindow;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setClientUUID:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)clientUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasClientUUID;
- (BOOL)hasMessageData;
- (id)messageData;
- (void)setMessageData:;
- (void)setReceiveWindow:;
- (void)setHasReceiveWindow:;
- (BOOL)hasReceiveWindow;
- (unsigned int)receiveWindow;
@end
