@interface AWERVUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (double)portraitStatusBarHeight;
+ (double)screenAbsoluteWidth;
+ (double)screenAbsoluteHeight;
+ (id)feedVC;
+ (void)addRoundingCornerWithView:byRoundingCorners:cornerRadii:;
+ (BOOL)isLandscapeVideo:;
+ (BOOL)isFakeLandscapeVideo:;
+ (BOOL)isPortraitVideo:;
+ (id)cardCoverMatchingPlaceholderFromModel:isOneColumn:;
+ (BOOL)isIOS11;
+ (BOOL)shouldUpdateMixCellTitleWithModel:;
@end
