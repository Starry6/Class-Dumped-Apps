@interface IESCKLayoutRuleFactory : NSObject
+ (void)registerLayoutRule:forViewType:;
+ (id)ruleMap;
+ (void)setDynamicViewContainerMapping:;
+ (void)_lazyRegister;
+ (id)layoutRuleforView:;
@end
