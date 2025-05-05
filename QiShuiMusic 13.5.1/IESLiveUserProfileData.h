@interface IESLiveUserProfileData : IESLivePBBaseMessage
@property (nonatomic) IESLiveUserProfile userProfile;
@property (nonatomic) BOOL hasUserProfile;
@property (nonatomic) HTSLiveUser userData;
@property (nonatomic) BOOL hasUserData;
+ (id)descriptor;
@end
