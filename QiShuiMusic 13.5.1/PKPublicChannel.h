@interface PKPublicChannel : NSObject
@property (nonatomic) NSString channelID;
@property (nonatomic) NSString channelTopic;
@property (nonatomic) NSString environment;
@property (nonatomic) NSString tokenName;
@property (nonatomic) Q checkpoint;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setChannelID:;
- (id)initWithChannelID:;
- (void)setEnvironment:;
- (id)initWithDictionary:;
- (id)initWithChannelID:channelTopic:environment:tokenName:checkpoint:;
- (unsigned long long)hash;
- (void)resetCheckpoint;
- (id)environment;
- (void)setChannelTopic:;
- (void)setTokenName:;
- (unsigned long long)checkpoint;
- (void).cxx_destruct;
- (id)tokenName;
- (id)description;
- (id)channelTopic;
- (id)dictionaryRepresentation;
- (id)channelID;
- (BOOL)isEqual:;
- (void)setCheckpoint:;
- (id)initWithChannelID:channelTopic:environment:checkpoint:;
@end
