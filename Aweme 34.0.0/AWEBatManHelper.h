@interface AWEBatManHelper : NSObject
+ (BOOL)isFirstTimePlayForBatManID:;
+ (void)setFirstTimePlayForBatManID:;
+ (BOOL)isValidNetwork;
+ (BOOL)needShowAddDesktopForBatManID:;
+ (void)setAddToDesktopForBatManID:;
+ (BOOL)isLoadingVCShowing;
+ (id)convertAlertHeaderFromIcon:Title:;
+ (void)queryBatManModel:source:completion:;
+ (BOOL)isSmallScreenDevice;
@end
