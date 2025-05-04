@interface AWERVNewDetailCardLayout : NSObject
+ (id)sizeForHeadCardWithModel:width:isClickExpand:;
+ (id)sizeForNormalCardWithModel:width:;
+ (double)videoHeightForHeadCardWithModel:width:;
+ (double)videoBottomHeightWithModel:isExpand:cardStyle:;
+ (double)videoHeightForNormalCardWithModel:width:;
+ (id)sizeForCardType:awemeModel:width:isClickExpand:;
+ (double)videoHeightForNormalCardWithModel:;
+ (double)videoHeightForHeadCardWithModel:;
@end
