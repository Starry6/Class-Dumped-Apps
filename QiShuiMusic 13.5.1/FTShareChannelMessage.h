@interface FTShareChannelMessage : FTIDSMessage
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger version;
@property (nonatomic) NSString messageID;
@property (nonatomic) NSData protoData;
@property (nonatomic) NSData protoResponse;
@property (nonatomic) NSInteger responseValue;
- (id)messageID;
- (int)messageType;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)isIDSMessage;
- (void)setVersion:;
- (int)version;
- (id)messageBody;
- (long long)responseCommand;
- (long long)command;
- (BOOL)wantsBinaryPush;
- (BOOL)highPriority;
- (void).cxx_destruct;
- (void)setMessageID:;
- (void)setMessageType:;
- (id)topic;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsCompressedBody;
- (void)handleResponseHeaders:;
- (BOOL)wantsIDSProtocolVersion;
- (void)handleResponseDictionary:;
- (id)copyWithZone:;
- (BOOL)wantsResponse;
- (id)protoData;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)wantsIntegerUniqueIDs;
- (void)setProtoData:;
- (id)protoResponse;
- (void)setProtoResponse:;
- (int)responseValue;
- (void)setResponseValue:;
- (id)initWithProtoData:messageType:;
@end
