@interface AWEIMShareProfileManager : NSObject
+ (void)sendRecommendUsers:profileCover:profileIDArray:toFriend:completion:;
+ (void)transferToMessageVCWithUid:;
+ (id)contextWithUser:;
+ (id)shareModelWithUser:;
@end
