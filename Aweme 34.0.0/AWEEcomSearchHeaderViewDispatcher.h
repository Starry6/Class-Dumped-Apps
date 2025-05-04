@interface AWEEcomSearchHeaderViewDispatcher : NSObject
+ (id)headerViewClasses;
+ (void)registerSupplementaryViewForCollectionView:;
+ (Class)headerViewClassWithModel:;
+ (double)getGuideSearchViewHeightWithModel:isFromECommerce:;
@end
