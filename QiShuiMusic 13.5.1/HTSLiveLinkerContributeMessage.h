@interface HTSLiveLinkerContributeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) q totalScore;
@property (nonatomic) NSMutableArray userContributeListArray;
@property (nonatomic) Q userContributeListArray_Count;
@property (nonatomic) q microTimeStamp;
@property (nonatomic) q scene;
@property (nonatomic) NSString totalScoreRealStr;
@property (nonatomic) NSString totalScoreStr;
@property (nonatomic) HTSLiveLinkmicQuickInteract quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
+ (id)descriptor;
@end
