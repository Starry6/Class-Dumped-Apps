@interface IESLivePropertyUpdateUtils : NSObject
+ (id)updateRectWithFrom:to:progress:;
+ (id)updateSizeWithFrom:to:progress:;
+ (void)componentsByColor:components:;
+ (void)updateColorWithFrom:to:progress:onUpdate:;
+ (double)updateFloatWithFrom:to:progress:;
+ (double)updateNumberWithFrom:to:progress:;
+ (id)updatePointWithFrom:to:progress:;
@end
