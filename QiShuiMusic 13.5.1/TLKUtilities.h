@interface TLKUtilities : NSObject
+ (double)standardRoundedCornerRadiusRatio;
+ (BOOL)deviceSupportsRotation;
+ (void)performWithoutAnimations:;
+ (void)dispatchAsyncIfNecessary:;
+ (void)performAnimatableChanges:animated:;
+ (id)testImageWithSize:color:;
+ (BOOL)recursivelyCheckIfSubviewTapped:forTappedView:;
+ (void)performAnimatableChanges:;
+ (double)appIconCornerRadiusRatio;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:;
+ (double)onePixelForCurrentScreenResolution;
+ (void)executeBlock:async:;
+ (void)performAnimatableChanges:animated:completion:;
+ (id)testImageWithSize:text:color:;
+ (id)testImageWithSize:text:;
+ (void)dispatchMainIfNecessary:;
+ (BOOL)isMacOS;
+ (BOOL)isHiddenView:;
@end
