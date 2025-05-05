@interface HTSLiveStartSingMultiChorusContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMultiChorusCommonContent common;
@property (nonatomic) BOOL hasCommon;
+ (id)descriptor;
@end
