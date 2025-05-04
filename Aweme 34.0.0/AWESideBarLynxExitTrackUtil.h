@interface AWESideBarLynxExitTrackUtil : NSObject
+ (void)loadFailedForBusinessID:reason:threshold:;
+ (void)exitForBusinessID:reason:threshold:;
+ (void)p_trackWithType:businessID:reason:threshold:;
+ (id)exitReasonString:;
@end
