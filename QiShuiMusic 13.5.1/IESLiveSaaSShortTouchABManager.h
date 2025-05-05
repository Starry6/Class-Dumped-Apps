@interface IESLiveSaaSShortTouchABManager : NSObject
- (BOOL)enableAlphaLoading;
- (BOOL)isWithinShortTouchEnterRoomLimitation;
+ (id)managerWithDIContext:;
@end
