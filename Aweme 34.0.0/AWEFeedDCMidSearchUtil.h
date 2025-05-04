@interface AWEFeedDCMidSearchUtil : NSObject
+ (double)getVisiblePercentWithCell:collectionView:;
+ (BOOL)isPreload:;
+ (BOOL)isFromCache:;
+ (double)cellVisiblePercentInWindow:keyboardHeight:;
+ (id)jointItems:;
+ (id)searchMiddleVC;
+ (id)findViewControllerWithDelegate:;
+ (id)showTypeWithRefreshType:;
@end
