@interface IESLiveSaaSPBLinkerContributeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) q totalScore;
@property (nonatomic) NSMutableArray userContributeListArray;
@property (nonatomic) Q userContributeListArray_Count;
@property (nonatomic) q microTimeStamp;
@property (nonatomic) q scene;
+ (id)descriptor;
@end
