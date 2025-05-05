@interface IESLiveUserProfileResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveUserProfileData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IESLiveUserProfileExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
