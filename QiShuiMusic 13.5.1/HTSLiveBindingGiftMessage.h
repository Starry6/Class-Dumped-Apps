@interface HTSLiveBindingGiftMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveGiftMessage msg;
@property (nonatomic) BOOL hasMsg;
+ (id)descriptor;
@end
