@interface CNUIUserActionItemComparator : NSObject
+ (id)scoreForUserAction:;
+ (id)comparatorWithActionItemGrouping;
+ (id)comparatorWithPreferredLabelsFirst;
+ (id)comparatorWithAlphabeticalOrderByLabel;
+ (id)comparatorWithAlphabeticalOrderByTargetHandle;
@end
