@interface IESLiveNotifyEffectFrequencyConfig : MTLModel
@property (nonatomic) q timeGap;
@property (nonatomic) q maxNumInTimeSlice;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxNumInTimeSlice;
- (void)setMaxNumInTimeSlice:;
- (long long)timeGap;
- (void)setTimeGap:;
+ (id)JSONKeyPathsByPropertyKey;
@end
