@interface HTSLiveToolbarRedDotManager : NSObject
- (id)readTimeStampFromSetting:;
- (void)redDotTapped:;
- (id)secondCellReadTimeStampFromFirstIdentifier:secondIdentifier:;
- (void)secondCellSpecialItemDidTapeed:specialItem:;
- (BOOL)secondCellSpecialItemShowRed:specialItem:;
- (BOOL)showRedDot:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)sharedManager;
@end
