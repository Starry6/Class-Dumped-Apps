@interface AEWIMSearchTrackUtil : NSObject
+ (void)collectionView:didSelectItemAtIndexPath:isRecommend:searchType:;
+ (id)__searchTypeStringForType:;
+ (void)__trackCell:indexPath:event:isRecommend:extra:;
+ (void)collectionView:willDisplayCell:forItemAtIndexPath:isRecommend:;
+ (void)enterSearch:searchType:;
+ (void)showSearchEntrance;
@end
