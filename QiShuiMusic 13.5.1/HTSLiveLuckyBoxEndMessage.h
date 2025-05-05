@interface HTSLiveLuckyBoxEndMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q boxId;
@property (nonatomic) NSString boxIdStr;
+ (id)descriptor;
@end
