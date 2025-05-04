@interface AWEAntiAddictStrategyNightToastModel : MTLModel
@property (nonatomic) NSNumber midnightRemindLiveTime;
@property (nonatomic) NSNumber midnightRemindTimeRange;
@property (nonatomic) NSNumber midnightRemindInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)midnightRemindTimeRange;
- (id)midnightRemindInterval;
- (id)midnightRemindLiveTime;
- (id)initWithMidnightRemindLiveTime:midnightRemindTimeRange:midnightRemindInterval:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
