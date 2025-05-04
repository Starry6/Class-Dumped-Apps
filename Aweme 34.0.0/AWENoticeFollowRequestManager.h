@interface AWENoticeFollowRequestManager : NSObject
+ (void)followRequestDidRefuse:user:extraTrackParams:completion:;
+ (void)followRequestDidApprove:extraTrackParams:completion:;
+ (void)followRequestDidFollowBack:extraTrackParams:completion:;
+ (void)trackWithParams:event:;
+ (id)relationContext:extraTrackParams:;
@end
