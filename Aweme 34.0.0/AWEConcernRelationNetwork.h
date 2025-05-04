@interface AWEConcernRelationNetwork : NSObject
+ (void)hideMyPostFromUser:completion:;
+ (void)showMyPostToUser:completion:;
+ (void)blockUser:completion:;
+ (void)topFollowingUser:completion:;
+ (void)untopFollowingUser:completion:;
+ (void)approveUser:completion:;
+ (void)rejectUser:completion:;
+ (void)unblockUser:completion:;
+ (void)hidePostFromUser:completion:;
+ (void)unhidePostFromUser:completion:;
+ (void)followType:context:completion:;
+ (void)topOrUntopFollowingUser:type:completion:;
+ (void)blockOrHideMyPostUserID:type:source:completion:;
@end
