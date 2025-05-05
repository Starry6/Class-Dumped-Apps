@interface HTSLiveFinishMultiChorusContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMultiChorusCommonContent common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger finishReason;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
