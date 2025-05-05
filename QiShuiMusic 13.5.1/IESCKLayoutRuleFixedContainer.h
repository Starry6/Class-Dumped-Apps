@interface IESCKLayoutRuleFixedContainer : IESCKLayoutBaseRule
- (id)_containerForViewType:;
- (id)layoutView:;
+ (id)_containerEntryMap;
+ (BOOL)isFixedContainerView:;
@end
