@interface SFCloudChannelsRequestItem : NSObject
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) NSString pushTopic;
@property (nonatomic) NSString subscribedEntityIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPushTopic:;
- (id)initWithProtobuf:;
- (id)pushTopic;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)channelIdentifier;
- (void)setChannelIdentifier:;
- (id)subscribedEntityIdentifier;
- (void)setSubscribedEntityIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
