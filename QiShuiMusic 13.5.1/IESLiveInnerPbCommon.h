@interface IESLiveInnerPbCommon : GPBMessage
@property (nonatomic) NSString method;
@property (nonatomic) q msgId;
@property (nonatomic) q roomId;
@property (nonatomic) q createTime;
@property (nonatomic) NSInteger monitor;
@property (nonatomic) BOOL isShowMsg;
@property (nonatomic) NSString describe;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) q foldType;
@property (nonatomic) q anchorFoldType;
@property (nonatomic) q priorityScore;
@property (nonatomic) NSString logId;
@property (nonatomic) NSString msgProcessFilterK;
@property (nonatomic) NSString msgProcessFilterV;
+ (id)descriptor;
@end
