@interface CEMMessageBase : CEMPayloadBase
@property (nonatomic) NSString messageType;
@property (nonatomic) NSString messageIdentifier;
@property (nonatomic) NSString messageInReplyTo;
@property (nonatomic) NSDate messageTimestamp;
@property (nonatomic) CEMAnyPayload messagePayload;
- (id)messageType;
- (void)setMessagePayload:;
- (id)messagePayload;
- (void).cxx_destruct;
- (void)setMessageType:;
- (id)serialize;
- (id)messageIdentifier;
- (id)copyWithZone:;
- (void)setMessageIdentifier:;
- (id)serializeAsDataWithError:;
- (BOOL)loadMessageFromDictionary:error:;
- (id)messageInReplyTo;
- (void)setMessageInReplyTo:;
- (id)messageTimestamp;
- (void)setMessageTimestamp:;
+ (id)messageForPayload:error:;
+ (id)messageForData:error:;
@end
