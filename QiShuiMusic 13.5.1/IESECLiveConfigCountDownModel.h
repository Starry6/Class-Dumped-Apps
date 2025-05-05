@interface IESECLiveConfigCountDownModel : MTLModel
@property (nonatomic) q startInterval;
@property (nonatomic) q endInterval;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEndInterval:;
- (id)countDownAttributedStringWithFontSize:textColor:appendString:timeType:ignoreLocalTimeGapControl:;
- (void)decreaseSeconds:;
- (BOOL)isValidWithServerTime:;
- (void)setServerTime:;
- (void)setStartInterval:;
- (long long)startInterval;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (id)serverTime;
- (long long)endInterval;
+ (id)JSONKeyPathsByPropertyKey;
@end
