@interface AWEIMSkylightExitCondition : MTLModel
@property (nonatomic) Q clickTimes;
@property (nonatomic) Q showDays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)clickTimes;
- (void)setClickTimes:;
- (unsigned long long)showDays;
- (void)setShowDays:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
