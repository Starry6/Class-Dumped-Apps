@interface IESLiveSaaSGetUserWaitingOffsetResponse_ResponseData : GPBMessage
@property (nonatomic) q offset;
@property (nonatomic) NSString prompt;
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray waitingUsersArray;
@property (nonatomic) Q waitingUsersArray_Count;
+ (id)descriptor;
@end
