@interface ScreenChatResponse : IESLivePBBaseMessage
@property (nonatomic) ScreenChatResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
