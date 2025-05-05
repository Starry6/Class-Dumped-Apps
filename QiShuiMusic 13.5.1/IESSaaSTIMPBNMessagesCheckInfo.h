@interface IESSaaSTIMPBNMessagesCheckInfo : GPBMessage
@property (nonatomic) q headMsgIndex;
@property (nonatomic) BOOL hasHeadMsgIndex;
@property (nonatomic) q tailMsgIndex;
@property (nonatomic) BOOL hasTailMsgIndex;
@property (nonatomic) NSInteger msgCount;
@property (nonatomic) BOOL hasMsgCount;
@property (nonatomic) I indexesChecksum;
@property (nonatomic) BOOL hasIndexesChecksum;
+ (id)descriptor;
@end
