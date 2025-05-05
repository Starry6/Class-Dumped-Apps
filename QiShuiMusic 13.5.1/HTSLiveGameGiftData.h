@interface HTSLiveGameGiftData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGameGiftData_MonkeyData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
