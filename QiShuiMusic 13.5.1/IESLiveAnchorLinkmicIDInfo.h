@interface IESLiveAnchorLinkmicIDInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mainLinkmicIdStr;
@property (nonatomic) NSString backupLinkmicIdStr;
@property (nonatomic) BOOL useBackupStream;
- (id)iesLiveMultiLinker_currentBackupLinkmicID;
- (id)iesLiveMultiLinker_currentUsingLinkmicID;
+ (id)descriptor;
@end
