@interface HTSLivePKIconBubbleMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLivePKIconBubble bubbleInfo;
@property (nonatomic) BOOL hasBubbleInfo;
+ (id)descriptor;
@end
