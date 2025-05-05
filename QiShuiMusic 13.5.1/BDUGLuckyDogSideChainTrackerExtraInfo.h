@interface BDUGLuckyDogSideChainTrackerExtraInfo : NSObject
@property (nonatomic) q repeatCount;
@property (nonatomic) q startTimeInMS;
@property (nonatomic) q endTimeInMS;
@property (nonatomic) BOOL isActivated;
@property (nonatomic) NSString status;
- (void)setEndTimeInMS:;
- (long long)endTimeInMS;
- (void)setStartTimeInMS:;
- (long long)startTimeInMS;
- (void)updateEndTimeInMS;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (void)setStatus:;
- (id)init;
- (id)initWithDictionary:;
- (id)dictionaryValue;
- (BOOL)isActivated;
- (void).cxx_destruct;
- (id)status;
- (void)setIsActivated:;
@end
