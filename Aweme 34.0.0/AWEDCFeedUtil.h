@interface AWEDCFeedUtil : NSObject
+ (double)getVisiblePercentWithCell:collectionView:;
+ (BOOL)isPreload:;
+ (BOOL)isFromCache:;
+ (double)screenAbsoluteWidth;
+ (double)screenAbsoluteHeight;
+ (double)cellWidth;
@end
