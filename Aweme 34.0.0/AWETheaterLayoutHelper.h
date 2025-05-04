@interface AWETheaterLayoutHelper : NSObject
+ (long long)getDynamicSectionColumnWith:;
+ (BOOL)enableAdapterPad;
+ (id)cellSizeForCellType:breakPoint:containerSize:;
+ (id)sectionInsetForCellType:breakPoint:;
+ (double)cellSpaceForCellType:breakPoint:;
+ (id)defaultHorizontalGridParamsMap;
@end
