@interface TUConversationUnreliableMessengerConfig : NSObject
@property (nonatomic) Q establishChannelMaxAttempts;
@property (nonatomic) Q establishChannelRetryIntervalMillis;
@property (nonatomic) Q egressMessagePayloadMaxSizeBytes;
@property (nonatomic) Q channelStreamMaxQueueSize;
@property (nonatomic) Q channelStreamMaxTries;
@property (nonatomic) Q channelStreamRetryIntervalMillis;
@property (nonatomic) NSData idsAliasingSalt;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)idsAliasingSalt;
- (void)setIdsAliasingSalt:;
- (unsigned long long)establishChannelMaxAttempts;
- (unsigned long long)establishChannelRetryIntervalMillis;
- (unsigned long long)egressMessagePayloadMaxSizeBytes;
- (unsigned long long)channelStreamMaxQueueSize;
- (unsigned long long)channelStreamMaxTries;
- (unsigned long long)channelStreamRetryIntervalMillis;
- (id)initWithEstablishChannelMaxAttempts:establishChannelRetryIntervalMillis:egressMessagePayloadMaxSizeBytes:channelStreamMaxQueueSize:channelStreamMaxTries:channelStreamRetryIntervalMillis:;
- (BOOL)isEqualToConversationUnreliableMessengerConfig:;
+ (id)shared;
+ (BOOL)supportsSecureCoding;
@end
