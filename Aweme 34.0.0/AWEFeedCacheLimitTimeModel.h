@interface AWEFeedCacheLimitTimeModel : MTLModel
@property (nonatomic) NSString startTimeInMin;
@property (nonatomic) NSString endTimeInMin;
@property (nonatomic) NSString peakTimeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startTimeInMin;
- (void)setStartTimeInMin:;
- (id)endTimeInMin;
- (void)setEndTimeInMin:;
- (id)peakTimeType;
- (void)setPeakTimeType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
