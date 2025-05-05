@interface HTSLiveLinkerAnchorStreamSwitchContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixAnchorUserID;
@property (nonatomic) BOOL useBackupStream;
@property (nonatomic) NSString anchorOpenUserId;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
- (id)mixAnchorUserID;
+ (id)descriptor;
@end
