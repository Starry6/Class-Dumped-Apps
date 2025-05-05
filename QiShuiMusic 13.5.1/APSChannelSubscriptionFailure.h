@interface APSChannelSubscriptionFailure : NSObject
@property (nonatomic) NSString pushTopic;
@property (nonatomic) NSString channelID;
@property (nonatomic) NSInteger failureReason;
- (void)setChannelID:;
- (int)failureReason;
- (void)setPushTopic:;
- (id)pushTopic;
- (void).cxx_destruct;
- (void)setFailureReason:;
- (id)description;
- (id)channelID;
@end
