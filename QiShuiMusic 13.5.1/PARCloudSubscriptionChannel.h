@interface PARCloudSubscriptionChannel : PARSubscriptionChannel
@property (nonatomic) SFCloudChannelsRequestItem channelItem;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithChannelItem:;
- (id)channelItem;
- (void)setChannelItem:;
+ (BOOL)supportsSecureCoding;
@end
