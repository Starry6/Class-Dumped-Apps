@interface AWELandscapeCellManager : NSObject
- (unsigned long long)getCellTypeWith:;
- (BOOL)isLiveCell:;
- (BOOL)isLongVideoCell:;
- (void)registerCellClass:forType:;
- (Class)cellClassForModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
