@interface AWEIMSwipeTools : NSObject
+ (void)hideSwipeablesForCollectionView:;
+ (BOOL)enableTableViewSwipeFunction;
+ (BOOL)enableCollectionViewSwipeFunction;
+ (void)hideSwipeablesForScrollView:;
+ (id)swipeablesForScrollView:;
+ (double)defaultElasticTranslationRatio;
+ (id)elasticTranslationForGesture:inView:withLimit:fromOriginalCenter:applyingRatio:;
+ (void)hideSwipeable:;
+ (id)swipeablesForTableView:;
+ (id)swipeablesForCollectionView:;
+ (void)hideSwipeablesForTableView:;
@end
