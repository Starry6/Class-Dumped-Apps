@interface HTSLiveComments_TextInfo : IESLivePBBaseMessage
@property (nonatomic) q commentId;
@property (nonatomic) HTSLiveComments_TextInfo_UserInfo userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger diggCount;
@property (nonatomic) q createTimeStamp;
@property (nonatomic) NSString commentIdStr;
+ (id)descriptor;
@end
