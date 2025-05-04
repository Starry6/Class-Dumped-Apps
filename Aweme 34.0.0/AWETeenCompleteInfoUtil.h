@interface AWETeenCompleteInfoUtil : NSObject
+ (float)getCompletionPercentWithUser:avatarImage:avatarUrl:;
+ (BOOL)needUserCompleteProfile;
+ (void)setUserCompleteProfileDictWithShownKey:expireDate:;
@end
