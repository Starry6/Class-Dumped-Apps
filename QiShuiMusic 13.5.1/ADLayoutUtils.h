@interface ADLayoutUtils : NSObject
+ (unsigned long long)adjustLayout:sourceOrientation:toRotationPreference:;
+ (BOOL)isLandscape:;
+ (unsigned long long)layoutForSize:;
+ (BOOL)isLandscapeSize:;
+ (id)layoutAsString:;
+ (unsigned long long)transposeLayout:;
+ (BOOL)aspectRatio:matchesAspectRatio:;
+ (float)aspectRatioForKnownLayout:;
@end
