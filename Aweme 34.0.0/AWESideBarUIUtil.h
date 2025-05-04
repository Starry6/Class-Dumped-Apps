@interface AWESideBarUIUtil : NSObject
+ (unsigned long long)enlargeType;
+ (BOOL)bigFontModeOn;
+ (id)fontOfClass:weight:;
+ (double)floatWithFloat:;
+ (long long)adaptiveStyle;
+ (BOOL)enableAdaptiveStyle;
+ (long long)needsDegradeToDisplay;
+ (id)sizeWithSize:;
+ (long long)validRichModuleColumnLimit:defaultValue:;
+ (long long)validGridListModuleColumnLimit:defaultValue:;
+ (long long)realMaxShowLimitWithServeMaxShowLimit:serveColumnLimit:realColumnLimit:;
+ (BOOL)topAreaHorizontalImpartialCellCanShowTextBadge;
+ (double)topAreaHorizontalImpartialCellTextBadgeMaxRightPadding;
+ (double)topAreaHorizontalImpartialCellWidth;
@end
