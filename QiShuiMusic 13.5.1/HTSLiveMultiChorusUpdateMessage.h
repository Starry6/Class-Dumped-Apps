@interface HTSLiveMultiChorusUpdateMessage : IESLivePBBaseMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveStartSingMultiChorusContent startSingMultiChorusContent;
@property (nonatomic) HTSLiveJoinMultiChorusContent joinMultiChorusContent;
@property (nonatomic) HTSLiveLeaveMultiChorusContent leaveMultiChorusContent;
@property (nonatomic) HTSLiveFinishMultiChorusContent finishMultiChorusContent;
+ (id)descriptor;
@end
