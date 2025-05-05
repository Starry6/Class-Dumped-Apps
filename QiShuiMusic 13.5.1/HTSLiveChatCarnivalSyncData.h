@interface HTSLiveChatCarnivalSyncData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveChatCarnivalMessage data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
