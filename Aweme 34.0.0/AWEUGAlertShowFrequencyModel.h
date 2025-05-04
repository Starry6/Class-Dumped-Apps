@interface AWEUGAlertShowFrequencyModel : MTLModel
@property (nonatomic) q showTimeInterval;
@property (nonatomic) q showTimesInDays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowTimeInterval:;
- (long long)showTimeInterval;
- (long long)showTimesInDays;
- (void)setShowTimesInDays:;
+ (id)JSONKeyPathsByPropertyKey;
@end
