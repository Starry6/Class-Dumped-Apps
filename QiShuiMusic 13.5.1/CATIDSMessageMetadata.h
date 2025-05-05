@interface CATIDSMessageMetadata : NSObject
@property (nonatomic) NSUUID messageIdentifier;
@property (nonatomic) q messageType;
@property (nonatomic) Q messagingVersion;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)messageType;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (id)messageIdentifier;
- (id)initWithMessageType:;
- (id)initWithMessageIdentifier:messageType:messagingVersion:;
- (unsigned long long)messagingVersion;
+ (id)instanceWithDictionary:;
@end
