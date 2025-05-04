@interface AWEAntiAddictStrategyDynamicToastModel : MTLModel
@property (nonatomic) NSArray dynamicRemindUsageRange;
@property (nonatomic) NSNumber dynamicRemindMultiplier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)dynamicRemindUsageRangeMin;
- (long long)dynamicRemindUsageRangeMax;
- (id)dynamicRemindMultiplier;
- (id)dynamicRemindUsageRange;
- (id)initWithDynamicRemindUsageRange:dynamicRemindMultiplier:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
