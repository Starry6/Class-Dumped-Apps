@interface HTSLiveAnchorLinkmicInfo : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) BOOL useBackupStream;
+ (id)descriptor;
@end
