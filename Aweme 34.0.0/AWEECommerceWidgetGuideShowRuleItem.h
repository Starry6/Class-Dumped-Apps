@interface AWEECommerceWidgetGuideShowRuleItem : MTLModel
@property (nonatomic) Q day;
@property (nonatomic) Q maxTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)maxTimes;
- (void)setMaxTimes:;
- (unsigned long long)day;
- (void)setDay:;
+ (id)JSONKeyPathsByPropertyKey;
@end
