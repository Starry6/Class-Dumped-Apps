@interface CJPayRetainUtil : NSObject
+ (BOOL)couldShowLynxRetainVCWithSourceVC:isRemoveSourceVC:retainUtilModel:completion:;
+ (BOOL)couldShowRetainVCWithSourceVC:retainUtilModel:;
+ (BOOL)couldShowRetainVCWithSourceVC:retainUtilModel:completion:;
+ (BOOL)needShowRetainPage:;
+ (id)p_getPositionStrBy:;
+ (id)p_getRetainTypeStrBy:;
+ (void)p_notifyServerEventWith:retainType:;
+ (void)p_trackRetainVCShowStatusWith:retainType:position:;
@end
