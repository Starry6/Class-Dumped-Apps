@interface IESLiveActivityEmojiNewTipModel : NSObject
@property (nonatomic) NSString activityEmojiKey;
@property (nonatomic) double latestDeliveryTime;
@property (nonatomic) BOOL hasBeenClicked;
@property (nonatomic) q alreadyHintTimes;
- (id)activityEmojiKey;
- (long long)alreadyHintTimes;
- (BOOL)hasBeenClicked;
- (id)initWithEmojiKey:;
- (double)latestDeliveryTime;
- (void)setActivityEmojiKey:;
- (void)setAlreadyHintTimes:;
- (void)setHasBeenClicked:;
- (void)setLatestDeliveryTime:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
