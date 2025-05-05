@interface IESLivePKTagViewBuilder : NSObject
+ (id)buildTagContainerViewWithTags:config:adjacentElementWidth:adjacentElementLimitWidth:containerlimitWidth:adjacentElementActualWidth:;
+ (id)buildTagContainerViewWithTags:config:tagSizes:adjacentElementWidth:adjacentElementLimitWidth:containerlimitWidth:adjacentElementActualWidth:shownTags:;
+ (id)buildTagContainerViewWithTags:config:tagSizes:adjacentElementWidth:adjacentElementLimitWidth:containerlimitWidth:adjacentElementActualWidth:shownTags:userDarkStyle:;
+ (id)p_makeTagViewWithTagInfo:config:userDarkStyle:;
+ (id)tagContentSize4Text:font:;
@end
