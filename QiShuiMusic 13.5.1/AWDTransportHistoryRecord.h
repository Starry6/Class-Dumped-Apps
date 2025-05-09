@interface AWDTransportHistoryRecord : PBCodable
@property (nonatomic) BOOL hasTransport;
@property (nonatomic) NSInteger transport;
@property (nonatomic) BOOL hasConnectionMethod;
@property (nonatomic) NSInteger connectionMethod;
@property (nonatomic) NSMutableArray connectionInfos;
@property (nonatomic) BOOL hasTransportSwitchReasonErrorDomain;
@property (nonatomic) NSInteger transportSwitchReasonErrorDomain;
@property (nonatomic) BOOL hasTransportSwitchReasonErrorCode;
@property (nonatomic) I transportSwitchReasonErrorCode;
@property (nonatomic) BOOL hasTimestampFailure;
@property (nonatomic) Q timestampFailure;
- (int)transport;
- (void)setTransport:;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setConnectionMethod:;
- (BOOL)hasConnectionMethod;
- (void)setHasConnectionMethod:;
- (int)connectionMethod;
- (void)setHasTransport:;
- (BOOL)hasTransport;
- (id)transportAsString:;
- (int)StringAsTransport:;
- (id)connectionMethodAsString:;
- (int)StringAsConnectionMethod:;
- (void)clearConnectionInfos;
- (void)addConnectionInfo:;
- (unsigned long long)connectionInfosCount;
- (id)connectionInfoAtIndex:;
- (int)transportSwitchReasonErrorDomain;
- (void)setTransportSwitchReasonErrorDomain:;
- (void)setHasTransportSwitchReasonErrorDomain:;
- (BOOL)hasTransportSwitchReasonErrorDomain;
- (id)transportSwitchReasonErrorDomainAsString:;
- (int)StringAsTransportSwitchReasonErrorDomain:;
- (void)setTransportSwitchReasonErrorCode:;
- (void)setHasTransportSwitchReasonErrorCode:;
- (BOOL)hasTransportSwitchReasonErrorCode;
- (void)setTimestampFailure:;
- (void)setHasTimestampFailure:;
- (BOOL)hasTimestampFailure;
- (id)connectionInfos;
- (void)setConnectionInfos:;
- (unsigned int)transportSwitchReasonErrorCode;
- (unsigned long long)timestampFailure;
+ (Class)connectionInfoType;
@end
