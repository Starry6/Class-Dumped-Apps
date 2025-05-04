@interface AWEMerchandiseSortFilterHelper : NSObject
+ (double)heightForModel:containerWidth:;
+ (id)defaultCellViewConfig:;
+ (double)heightForModel:config:;
+ (id)placeholderCellViewConfig:;
+ (double)calculateFilterInAllHeightWithModel:constraintWidth:;
+ (double)contentOffsetWhenInitialState:;
+ (BOOL)needCeilingWhenInitialState:;
@end
