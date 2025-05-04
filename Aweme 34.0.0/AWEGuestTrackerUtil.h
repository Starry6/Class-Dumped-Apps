@interface AWEGuestTrackerUtil : NSObject
+ (void)trackFollowWithUser:enterFrom:isUnfollow:;
+ (void)trackClickFollowCountWithEnterFrom:extraParams:;
+ (void)trackLikeSnackbarClickWithEnterFrom:groupID:authorID:;
+ (void)trackLikeSnackbarShowWithEnterFrom:groupID:authorID:;
+ (void)trackVisitorLikeWithEnterFrom:isUndigg:response:error:;
+ (void)trackVisitorFollowWithEnterFrom:isUnfollow:response:error:;
@end
