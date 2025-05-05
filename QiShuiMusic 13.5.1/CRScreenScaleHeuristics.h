@interface CRScreenScaleHeuristics : NSObject
+ (void)scaledDisplays:reply:;
+ (double)getPrimaryDisplayScale:viewAreas:;
+ (double)getSecondaryDisplayScale:physicalSize:;
@end
