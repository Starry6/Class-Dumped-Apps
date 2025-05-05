@interface HTSLiveAdminUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) BOOL isAnchorAssign;
@property (nonatomic) NSString visitStatus;
@property (nonatomic) q totalScore;
@property (nonatomic) BOOL inRoom;
@property (nonatomic) GPBEnumArray privilegesArray;
@property (nonatomic) Q privilegesArray_Count;
@property (nonatomic) NSString promptTotalScore;
+ (id)descriptor;
@end
